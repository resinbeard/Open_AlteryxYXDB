// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// helloWorldCpp
RcppExport SEXP helloWorldCpp(SEXP name);
RcppExport SEXP _rcppExample_helloWorldCpp(SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(helloWorldCpp(name));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP helloWorldCpp(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_rcppExample_helloWorldCpp", (DL_FUNC) &_rcppExample_helloWorldCpp, 1},
    {"helloWorldCpp",              (DL_FUNC) &helloWorldCpp,              1},
    {NULL, NULL, 0}
};

RcppExport void R_init_rcppExample(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}