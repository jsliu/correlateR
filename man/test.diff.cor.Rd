% Generated by roxygen2 (4.1.1): do not edit by hand
% Please edit documentation in R/test.diff.cor.R
\name{test.diff.cor}
\alias{test.diff.cor}
\title{Test for difference in correlation}
\usage{
\method{test}{diff.cor}(X1, X2, cor1 = cor(X1), cor2 = cor(X2),
  n1 = nrow(X1), n2 = nrow(X2), alternative = c("two.sided", "less",
  "greater"), conf.level = 0.95, null = 0)
}
\arguments{
\item{X1}{A \code{numeric} \code{matrix} of observations.}

\item{X2}{A \code{numeric} \code{matrix} of observations.}

\item{cor1}{A \code{numeric} \code{matrix}  of correlation coefficients in
the first group.}

\item{cor2}{As c\code{cor1} for the second group.}

\item{n1}{\code{integer} of length 1. The number of samples in group 1.}

\item{n2}{\code{integer} of length 1. The number of samples in group 2.}

\item{alternative}{The alternative hypothesis.}

\item{conf.level}{The confidence level used in the computed confidence
intervals.}

\item{null}{A matrix of number giving the difference in correlation under
the null hypothesis.}
}
\value{
A list of matrices or vector containing:
  \item{\code{LCL}}{The lower confidence interval limit.}
  \item{\code{UCL}}{The upper confidence interval limit.}
  \item{\code{z}}{A numeric matrix of Z-scores for the hypothesis.}
  \item{\code{p.val}}{A numeric matrix of the P-values.}
  with an attribute giving the alternative hypothesis.
}
\description{
This functions tests the hypothesis of no difference in correlations.
It uses Fisher's Z-transform (\code{atanh}) to test the null hypothesis
of no difference in correlations. See details.
}
\details{
The function uses Fisher's Z transform (\code{atanh}) of correlations to
  test that the hypotheses of no difference in correlation. The computed
  Z-score is
  \deqn{\frac{Z1 - Z2}{\sqrt{1/(n1 - 3) + 1/(n2 - 3))}}}{
             (Z1 - Z2)/ sqrt(1/(n1 - 3) + 1/(n2 - 3))}
  where Z1 and Z2 are the Fisher transformed correlations.
  It performs the test for all correlations in the correlation matrix.
}
\examples{
n1 <- 8
n2 <- 10
X1 <- createData(n = n1, m = 5)
X2 <- createData(n = n2, m = 5)

print(cor1 <- cor(X1))
print(cor2 <- cor(X2))

test.diff.cor(X1, X2)
test.diff.cor(cor1 = cor1, cor2 = cor2, n1 = n1, n2 = n2)

test.diff.cor(X1, X2, alternative = "less")
}
\author{
Anders Ellern Bilgrau <anders.ellern.bilgrau (at) gmail.com>
}
\references{
\url{http://core.ecu.edu/psyc/wuenschk/docs30/CompareCorrCoeff.pdf}
}
\seealso{
Similar usage to \code{\link[stats]{cor.test}} (but NOT the same thing).\cr
  This is a vectorised version of \code{\link{test.diff.cor.single}}.
}

