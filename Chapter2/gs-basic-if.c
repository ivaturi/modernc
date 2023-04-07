#include "gs.h"

void simple_if(){
    printf("--- if(i) --- \n");
    for (size_t i = 0; i < 5; ++i){
        if (i){ // skips the 0-index
            printf(" A[%zu] = %g \t\t %g^^2 = %g \n", i, A[i], A[i], A[i] * A[i]);
        }
    }
}

void if_equals(){
    printf("--- if(%%2 == 0) --- \n");
    for (size_t i = 0; i < 5; ++i){
        if (i%2 == 0){
            printf(" A[%zu] = %g \t\t %g^^2 = %g \n", i, A[i], A[i], A[i] * A[i]);
        }
    }
}

void if_equals_within_for(){
    printf("--- if(%%2 == 0), but within the for statement --- \n");
    for (size_t i = 0; i < 5 && i%2 == 0; ++i){
        printf(" A[%zu] = %g \t\t %g^^2 = %g \n", i, A[i], A[i], A[i] * A[i]);
    }
}

int main(void){
    simple_if();
    if_equals();
    if_equals_within_for();
    return EXIT_SUCCESS;
}