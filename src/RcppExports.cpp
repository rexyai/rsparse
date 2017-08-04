// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// als_implicit
double als_implicit(const arma::sp_mat& Conf, arma::mat& X, arma::mat& Y, double lambda, int n_threads, int solver, int cg_steps);
RcppExport SEXP _reco_als_implicit(SEXP ConfSEXP, SEXP XSEXP, SEXP YSEXP, SEXP lambdaSEXP, SEXP n_threadsSEXP, SEXP solverSEXP, SEXP cg_stepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type Conf(ConfSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< int >::type solver(solverSEXP);
    Rcpp::traits::input_parameter< int >::type cg_steps(cg_stepsSEXP);
    rcpp_result_gen = Rcpp::wrap(als_implicit(Conf, X, Y, lambda, n_threads, solver, cg_steps));
    return rcpp_result_gen;
END_RCPP
}
// als_loss_explicit
double als_loss_explicit(const arma::sp_mat& mat, arma::mat& X, arma::mat& Y, double lambda, int n_threads);
RcppExport SEXP _reco_als_loss_explicit(SEXP matSEXP, SEXP XSEXP, SEXP YSEXP, SEXP lambdaSEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type n_threads(n_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(als_loss_explicit(mat, X, Y, lambda, n_threads));
    return rcpp_result_gen;
END_RCPP
}
// top_k_indices_byrow
IntegerMatrix top_k_indices_byrow(NumericMatrix x, arma::sp_mat mat, int k, int n_threads);
RcppExport SEXP _reco_top_k_indices_byrow(SEXP xSEXP, SEXP matSEXP, SEXP kSEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type mat(matSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type n_threads(n_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(top_k_indices_byrow(x, mat, k, n_threads));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_reco_als_implicit", (DL_FUNC) &_reco_als_implicit, 7},
    {"_reco_als_loss_explicit", (DL_FUNC) &_reco_als_loss_explicit, 5},
    {"_reco_top_k_indices_byrow", (DL_FUNC) &_reco_top_k_indices_byrow, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_reco(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
