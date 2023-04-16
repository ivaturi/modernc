#include <stdio.h>

int main(void){
    typedef int blub;
    blub a = 0;
    printf("Blub (typedef'd int) = %d\n", a);
    return 1;
}