// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// combCurr
NumericVector combCurr(NumericMatrix dat, float wt);
RcppExport SEXP _bccciss_combCurr(SEXP datSEXP, SEXP wtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type dat(datSEXP);
    Rcpp::traits::input_parameter< float >::type wt(wtSEXP);
    rcpp_result_gen = Rcpp::wrap(combCurr(dat, wt));
    return rcpp_result_gen;
END_RCPP
}
// NewSuitNoCurr
NumericVector NewSuitNoCurr(NumericMatrix x, NumericVector vals);
RcppExport SEXP _bccciss_NewSuitNoCurr(SEXP xSEXP, SEXP valsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vals(valsSEXP);
    rcpp_result_gen = Rcpp::wrap(NewSuitNoCurr(x, vals));
    return rcpp_result_gen;
END_RCPP
}
// FeasSuit
NumericVector FeasSuit(NumericMatrix x, IntegerVector Curr, NumericVector vals, NumericVector CurrAdj);
RcppExport SEXP _bccciss_FeasSuit(SEXP xSEXP, SEXP CurrSEXP, SEXP valsSEXP, SEXP CurrAdjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Curr(CurrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vals(valsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type CurrAdj(CurrAdjSEXP);
    rcpp_result_gen = Rcpp::wrap(FeasSuit(x, Curr, vals, CurrAdj));
    return rcpp_result_gen;
END_RCPP
}
// stepDiff
NumericVector stepDiff(IntegerVector Year, NumericVector NewSuit, NumericVector Curr);
RcppExport SEXP _bccciss_stepDiff(SEXP YearSEXP, SEXP NewSuitSEXP, SEXP CurrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type Year(YearSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type NewSuit(NewSuitSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Curr(CurrSEXP);
    rcpp_result_gen = Rcpp::wrap(stepDiff(Year, NewSuit, Curr));
    return rcpp_result_gen;
END_RCPP
}
// ModelDir
NumericVector ModelDir(NumericMatrix x, NumericVector Curr, std::string dir);
RcppExport SEXP _bccciss_ModelDir(SEXP xSEXP, SEXP CurrSEXP, SEXP dirSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Curr(CurrSEXP);
    Rcpp::traits::input_parameter< std::string >::type dir(dirSEXP);
    rcpp_result_gen = Rcpp::wrap(ModelDir(x, Curr, dir));
    return rcpp_result_gen;
END_RCPP
}
// bifurcTrend
LogicalVector bifurcTrend(NumericVector Imp, NumericVector Decl);
RcppExport SEXP _bccciss_bifurcTrend(SEXP ImpSEXP, SEXP DeclSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type Imp(ImpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Decl(DeclSEXP);
    rcpp_result_gen = Rcpp::wrap(bifurcTrend(Imp, Decl));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bccciss_combCurr", (DL_FUNC) &_bccciss_combCurr, 2},
    {"_bccciss_NewSuitNoCurr", (DL_FUNC) &_bccciss_NewSuitNoCurr, 2},
    {"_bccciss_FeasSuit", (DL_FUNC) &_bccciss_FeasSuit, 4},
    {"_bccciss_stepDiff", (DL_FUNC) &_bccciss_stepDiff, 3},
    {"_bccciss_ModelDir", (DL_FUNC) &_bccciss_ModelDir, 3},
    {"_bccciss_bifurcTrend", (DL_FUNC) &_bccciss_bifurcTrend, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_bccciss(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}