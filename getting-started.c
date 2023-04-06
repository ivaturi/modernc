#include <stdlib.h>
#include <stdio.h>

int main(void){
    // declarations
    double A[5] = {
	[0] = 9.0,
	[1] = 2.9,
	[4] = 3.E+25,
	[3] = .0007
    };

    // doing some work
    for (size_t i = 0; i < 5; i++){
	printf("Element %zu is %g, \t\t its square is %g\n", i, A[i],  A[i] * A[i]);
    }

    return EXIT_SUCCESS;
}

