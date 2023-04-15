#include <stdlib.h>
#include <stdio.h>

// lower and upper iteration limits
static double const eps1m01 = 1.0 - 0x1p-01;
static double const eps1p01 = 1.0 + 0x1p-01;
static double const eps1m24 = 1.0 - 0x1p-24;
static double const eps1p24 = 1.0 + 0x1p-24;

int main(int argc, char* argv[argc + 1]){
    // process args
    for (int i  = 1; i < argc; ++i){
        double const a = strtod(argv[i], 0); // convert arg > double
        double x = 1.0;

        for(;;){
            double prod = a * x;
            if (prod < eps1m01){
                x *= 2.0;
            } else if (eps1p01 < prod){
                x *= 0.5;
            } else{
                break;
            }
        }
    

        for(;;){
            double prod = a * x;
            if ((prod < eps1m24) || (eps1p24 < prod)){
                x *= (2.0 - prod);
            } else{
                break;
            }
        }
        printf("heron: a=%.5e, \tx=%.5e, \ta*x=%.12f\n", a, x, a*x);
    }
    return EXIT_SUCCESS;
}
