// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// pickle_
List pickle_(RObject object);
RcppExport SEXP _pickleR_pickle_(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(pickle_(object));
    return rcpp_result_gen;
END_RCPP
}
// unpickle_
RObject unpickle_(List pickleDefinition);
RcppExport SEXP _pickleR_unpickle_(SEXP pickleDefinitionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pickleDefinition(pickleDefinitionSEXP);
    rcpp_result_gen = Rcpp::wrap(unpickle_(pickleDefinition));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_pickleR_pickle_", (DL_FUNC) &_pickleR_pickle_, 1},
    {"_pickleR_unpickle_", (DL_FUNC) &_pickleR_unpickle_, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_pickleR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
