typedef double(*RRFUN)(double a);

static double simp(double a, double b, double ep, RRFUN ffunc);
double modul(double x);
double integrate(double a, double b, double n, RRFUN ffunc);

