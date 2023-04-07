#include <stdio.h>
#include <stdlib.h>

void test_pointer(int* i){
    *i = 10;
}

int main(void){
    int p = 20;
    test_pointer(&p);
    printf("The value of p is %d\n", p);

    return EXIT_SUCCESS;
}