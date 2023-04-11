#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(int argc, char* argv[argc + 1]){

    double const x = strtod(argv[1], 0);
    double const deltax =strtod(argv[2], 0);
    // calculate derivative of sqrt
    double dx = (sqrt(x + deltax) - sqrt(x))/deltax;

    printf("dx(sqrt(x)) at x = %f is %f\n", x, dx);

    double dx_test = 0.5 * pow(x, -0.5);
    printf("It should be %f\n", dx_test);

    return EXIT_SUCCESS;
}