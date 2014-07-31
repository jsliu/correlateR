// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// corRcpp
Rcpp::NumericMatrix corRcpp(Rcpp::NumericMatrix& X);
RcppExport SEXP correlateR_corRcpp(SEXP XSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type X(XSEXP );
        Rcpp::NumericMatrix __result = corRcpp(X);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// crosscorRcpp
Rcpp::NumericMatrix crosscorRcpp(Rcpp::NumericMatrix& X, Rcpp::NumericMatrix& Y);
RcppExport SEXP correlateR_crosscorRcpp(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type X(XSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type Y(YSEXP );
        Rcpp::NumericMatrix __result = crosscorRcpp(X, Y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// corArma
arma::mat corArma(const arma::mat& X);
RcppExport SEXP correlateR_corArma(SEXP XSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP );
        arma::mat __result = corArma(X);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// crosscorArma
arma::mat crosscorArma(const arma::mat& X, const arma::mat& Y);
RcppExport SEXP correlateR_crosscorArma(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP );
        Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP );
        arma::mat __result = crosscorArma(X, Y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// corEigen
Eigen::MatrixXd corEigen(Eigen::Map<Eigen::MatrixXd>& X);
RcppExport SEXP correlateR_corEigen(SEXP XSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd>& >::type X(XSEXP );
        Eigen::MatrixXd __result = corEigen(X);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// crosscorEigen
Eigen::MatrixXd crosscorEigen(Eigen::Map<Eigen::MatrixXd>& X, Eigen::Map<Eigen::MatrixXd>& Y);
RcppExport SEXP correlateR_crosscorEigen(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd>& >::type X(XSEXP );
        Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd>& >::type Y(YSEXP );
        Eigen::MatrixXd __result = crosscorEigen(X, Y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// covRcpp
Rcpp::NumericMatrix covRcpp(Rcpp::NumericMatrix& X, const int norm_type);
RcppExport SEXP correlateR_covRcpp(SEXP XSEXP, SEXP norm_typeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type X(XSEXP );
        Rcpp::traits::input_parameter< const int >::type norm_type(norm_typeSEXP );
        Rcpp::NumericMatrix __result = covRcpp(X, norm_type);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// crosscovRcpp
Rcpp::NumericMatrix crosscovRcpp(Rcpp::NumericMatrix& X, Rcpp::NumericMatrix& Y, const int norm_type);
RcppExport SEXP correlateR_crosscovRcpp(SEXP XSEXP, SEXP YSEXP, SEXP norm_typeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type X(XSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type Y(YSEXP );
        Rcpp::traits::input_parameter< const int >::type norm_type(norm_typeSEXP );
        Rcpp::NumericMatrix __result = crosscovRcpp(X, Y, norm_type);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// covArma
arma::mat covArma(const arma::mat& X, const int norm_type);
RcppExport SEXP correlateR_covArma(SEXP XSEXP, SEXP norm_typeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP );
        Rcpp::traits::input_parameter< const int >::type norm_type(norm_typeSEXP );
        arma::mat __result = covArma(X, norm_type);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// crosscovArma
arma::mat crosscovArma(const arma::mat& X, const arma::mat& Y, const int norm_type);
RcppExport SEXP correlateR_crosscovArma(SEXP XSEXP, SEXP YSEXP, SEXP norm_typeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP );
        Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP );
        Rcpp::traits::input_parameter< const int >::type norm_type(norm_typeSEXP );
        arma::mat __result = crosscovArma(X, Y, norm_type);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// covEigen
Eigen::MatrixXd covEigen(Eigen::Map<Eigen::MatrixXd>& X, const int norm_type = 0);
RcppExport SEXP correlateR_covEigen(SEXP XSEXP, SEXP norm_typeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd>& >::type X(XSEXP );
        Rcpp::traits::input_parameter< const int >::type norm_type(norm_typeSEXP );
        Eigen::MatrixXd __result = covEigen(X, norm_type);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// crosscovEigen
Eigen::MatrixXd crosscovEigen(Eigen::Map<Eigen::MatrixXd>& X, Eigen::Map<Eigen::MatrixXd>& Y, const int norm_type = 0);
RcppExport SEXP correlateR_crosscovEigen(SEXP XSEXP, SEXP YSEXP, SEXP norm_typeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd>& >::type X(XSEXP );
        Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd>& >::type Y(YSEXP );
        Rcpp::traits::input_parameter< const int >::type norm_type(norm_typeSEXP );
        Eigen::MatrixXd __result = crosscovEigen(X, Y, norm_type);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
