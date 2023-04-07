#include "gs.h"

int main(void){

    for (size_t i = 0; i < 5; ++i){
        if (i){
            printf("> A[%zu] = %g \t\t %g^^2 = %g \n", i, A[i], A[i], A[i] * A[i]);
        }
    }
    return EXIT_SUCCESS;
}