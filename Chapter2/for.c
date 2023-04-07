#include "gs.h"

void for_simple_condition(){
    printf("Function: %s\n",__func__);
    for (size_t i = 5; i; --i){
        printf("%zu\n", i);
    }
}

void for_ext_variable(){
    printf("Function: %s\n",__func__);
    int i = 5;
    for(;i;--i){
        printf("%d\n", i);
    }
}

int upper_bound(){
    return 5;
}

void for_with_two_variables(){
    printf("Function: %s\n", __func__);
    for( size_t i = 0, stop = upper_bound(); i < stop; ++i){
        printf("%zu\n",i);
    }
}

void for_no_condition(){
    printf("Function: %s\n", __func__);
    for(size_t i = 5; i <= 5; --i){
        printf("%zu\n", i);
    }
}

int main(void){

    for_simple_condition();
    for_ext_variable();
    for_with_two_variables();
    for_no_condition();

    return EXIT_SUCCESS;
}