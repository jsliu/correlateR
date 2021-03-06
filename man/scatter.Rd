% Generated by roxygen2 (4.1.1): do not edit by hand
% Please edit documentation in R/scatter.R
\name{scatter}
\alias{scatter}
\alias{xscatter}
\title{Compute the scatter matrix}
\usage{
scatter(X, center = TRUE)

xscatter(X, Y, center = TRUE)
}
\arguments{
\item{X}{An \code{n} by \code{p1} numeric matrix with observations in the
rows and variables in the columns.}

\item{center}{logical. If \code{TRUE}, the data-matrices are centered first.}

\item{Y}{An \code{n} by \code{p2} as \code{X}.}
}
\value{
The \code{p1} times \code{p1} scatter matrix or
  \code{p1} times \code{p2} cross-scatter matrix.
}
\description{
This functions is a fast computation of the scatter matrix and cross-scatter
matrix given by
  \deqn{\sum_{i = 1}^n(x_i-\mu)(x_i-\mu)^T}{XX^T} and \eqn{XY^T}{XY^T}
respectively.
}
\examples{
n <- 11
X <- createData(n, 4)
Y <- createData(n, 2)
scatter(X)
(n-1)*cov(X)

xscatter(X, Y)
n*xcov(X, Y, method = "ML")  # == (n - 1)*xcov(X, Y)
}
\author{
Anders Ellern Bilgrau <anders.ellern.bilgrau (at) gmail.com>
}

