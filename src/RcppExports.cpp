// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// gs2gw
NumericVector gs2gw(NumericVector x, double a, double b);
RcppExport SEXP _ccissdev_gs2gw(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(gs2gw(x, a, b));
    return rcpp_result_gen;
END_RCPP
}
// SimGrowth
NumericVector SimGrowth(DataFrame DF, double ProbPest, double cmdMin, double cmdMax, double tempMin, double tempMax, double climLoss);
RcppExport SEXP _ccissdev_SimGrowth(SEXP DFSEXP, SEXP ProbPestSEXP, SEXP cmdMinSEXP, SEXP cmdMaxSEXP, SEXP tempMinSEXP, SEXP tempMaxSEXP, SEXP climLossSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type DF(DFSEXP);
    Rcpp::traits::input_parameter< double >::type ProbPest(ProbPestSEXP);
    Rcpp::traits::input_parameter< double >::type cmdMin(cmdMinSEXP);
    Rcpp::traits::input_parameter< double >::type cmdMax(cmdMaxSEXP);
    Rcpp::traits::input_parameter< double >::type tempMin(tempMinSEXP);
    Rcpp::traits::input_parameter< double >::type tempMax(tempMaxSEXP);
    Rcpp::traits::input_parameter< double >::type climLoss(climLossSEXP);
    rcpp_result_gen = Rcpp::wrap(SimGrowth(DF, ProbPest, cmdMin, cmdMax, tempMin, tempMax, climLoss));
    return rcpp_result_gen;
END_RCPP
}
// combCurr
NumericVector combCurr(NumericMatrix dat, float wt);
RcppExport SEXP _ccissdev_combCurr(SEXP datSEXP, SEXP wtSEXP) {
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
RcppExport SEXP _ccissdev_NewSuitNoCurr(SEXP xSEXP, SEXP valsSEXP) {
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
RcppExport SEXP _ccissdev_FeasSuit(SEXP xSEXP, SEXP CurrSEXP, SEXP valsSEXP, SEXP CurrAdjSEXP) {
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
RcppExport SEXP _ccissdev_stepDiff(SEXP YearSEXP, SEXP NewSuitSEXP, SEXP CurrSEXP) {
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
RcppExport SEXP _ccissdev_ModelDir(SEXP xSEXP, SEXP CurrSEXP, SEXP dirSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Curr(CurrSEXP);
    Rcpp::traits::input_parameter< std::string >::type dir(dirSEXP);
    rcpp_result_gen = Rcpp::wrap(ModelDir(x, Curr, dir));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ccissdev_gs2gw", (DL_FUNC) &_ccissdev_gs2gw, 3},
    {"_ccissdev_SimGrowth", (DL_FUNC) &_ccissdev_SimGrowth, 7},
    {"_ccissdev_combCurr", (DL_FUNC) &_ccissdev_combCurr, 2},
    {"_ccissdev_NewSuitNoCurr", (DL_FUNC) &_ccissdev_NewSuitNoCurr, 2},
    {"_ccissdev_FeasSuit", (DL_FUNC) &_ccissdev_FeasSuit, 4},
    {"_ccissdev_stepDiff", (DL_FUNC) &_ccissdev_stepDiff, 3},
    {"_ccissdev_ModelDir", (DL_FUNC) &_ccissdev_ModelDir, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_ccissdev(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
