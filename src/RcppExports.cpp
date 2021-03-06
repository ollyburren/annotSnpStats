// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// dups
IntegerMatrix dups(RawMatrix& X, RawMatrix& Y, IntegerVector maxDiff, IntegerVector Rtype, IntegerVector Rquick, RawVector& null, RawVector& het);
RcppExport SEXP annotSnpStats_dups(SEXP XSEXP, SEXP YSEXP, SEXP maxDiffSEXP, SEXP RtypeSEXP, SEXP RquickSEXP, SEXP nullSEXP, SEXP hetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< RawMatrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type maxDiff(maxDiffSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Rtype(RtypeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Rquick(RquickSEXP);
    Rcpp::traits::input_parameter< RawVector& >::type null(nullSEXP);
    Rcpp::traits::input_parameter< RawVector& >::type het(hetSEXP);
    rcpp_result_gen = Rcpp::wrap(dups(X, Y, maxDiff, Rtype, Rquick, null, het));
    return rcpp_result_gen;
END_RCPP
}
// asw
RawMatrix asw(RawMatrix x, NumericVector w);
RcppExport SEXP annotSnpStats_asw(SEXP xSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(asw(x, w));
    return rcpp_result_gen;
END_RCPP
}
