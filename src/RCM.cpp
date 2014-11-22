// Only include aux_functions.h which pulls in RcppArmadillo.h,
// RcppEigen.h, and Rcpp.h

#include "auxiliary_functions.h"

//' The RCM log-likelihood function
//' 
//' Fast evaluation of the RCM log-likelihood function.
//' 
//' @param Psi A numeric matrix.
//' @param nu A numeric of length 1 giving the degrees of freedom.
//' @param S_list A \code{list} of scatter matrices of the same size as 
//'   \code{Psi} for each group.
//' @param ns A numeric of the same length as \code{S_list} giving the 
//'   number of samples in each group.
//' @return The value of the log-likelihood.
//' @author Anders Ellern Bilgrau <abilgrau (at) math.aau.dk>
//' @keywords internal
// [[Rcpp::export]]
double rcm_loglik_arma(const arma::mat & Psi, 
                       const double nu, 
                       const Rcpp::List & S_list,  
                       const Rcpp::NumericVector & ns) { 
  const int k = S_list.size();
  const int p = Psi.n_rows;
  const Rcpp::NumericVector nu_half(1, nu/2.0f); // Vector of length 1
  const Rcpp::NumericVector cs = (nu + ns)/2.0f;
  const double logdetPsi = logdet_arma(Psi)(0);
  
  arma::vec logdetPsiPlusS(k);
  for (int i = 0; i < k; ++i) {
    arma::mat Si = S_list[i];
    logdetPsiPlusS(i) = logdet_arma( Psi + Si )(0);
  }

  const double c1 = sum(((ns * p)/2.0f) * log(2.0f));
  const double t1 = k*nu/2 * logdetPsi;
  const double t2 = Rcpp::sum( lgammap(cs, p) );
  const double t3 = -sum(cs*Rcpp::as<Rcpp::NumericVector>(
    Rcpp::wrap(logdetPsiPlusS)));
  const double t4 = -k * lgammap(nu_half, p)(0);
  return c1 + t1 + t2 + t3 + t4;
}

// Log-likelihood as a function of nu (slightly faster in optimization than
// using rcm_loglik_arma)
// [[Rcpp::export]]
double rcm_loglik_nu_arma(const arma::mat & Psi, 
                          const double nu, 
                          const Rcpp::List & S_list,  
                          const Rcpp::NumericVector & ns){
  const int k = S_list.size();
  const int p = Psi.n_rows;
  const double logdetPsi = logdet_arma(Psi)(0);
  const Rcpp::NumericVector nu_half(1, nu/2.0f);
  
  arma::vec logdetPsiPlusSi(k);
  for (int i = 0; i < k; ++i) {
    arma::mat Si = S_list[i];
    logdetPsiPlusSi(i) = logdet_arma( Psi + Si )(0);
  }
  const double t1 = nu/2*(k*logdetPsi - sum(logdetPsiPlusSi));
  const double t2 = sum(lgammap((nu + ns)/2.0f, p));
  const double t3 = -k*lgammap(nu_half, p)(0);
  return t1 + t2 + t3;
}

//' The RCM EM-step
//' 
//' A armadillo-based function to perform the E and M step in the 
//' EM algorithm of the RCM. This functions assumes \code{nu} to be fixed.
//' 
//' @param Psi A numeric matrix.
//' @param nu A numeric of length 1 giving the degrees of freedom in the RCM.
//' @param S_list A \code{list} of scatter matrices for each dataset/group
//'   of the same size a \code{Psi}.
//' @param ns A numeric vector the same lengths as \code{S_list} giving the
//'   number of samples for each dataset.
//' @return A numeric matrix the same size as \code{Psi} giving the updated
//'   \code{Psi}.
//' @keywords internal 
// [[Rcpp::export]]
arma::mat rcm_em_step_arma(const arma::mat & Psi, 
                           const double nu, 
                           const Rcpp::List & S_list,  
                           const Rcpp::NumericVector & ns) {
  int k = S_list.size();
  const int p = Psi.n_rows;
  const double co = 1.0f/(k*nu);
  
  arma::mat inv_ans(p, p, arma::fill::zeros);
  for (int i = 0; i < k; ++i) {
      double tmp = co*(ns[i] + nu);
      arma::mat S = S_list[i];
      inv_ans += tmp * arma::inv(Psi + S);
  }
  return arma::inv(inv_ans);
}

