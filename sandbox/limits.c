#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// What's in limits.h?
// from https://pubs.opengroup.org/onlinepubs/009695399/basedefs/limits.h.html


int main(void){

    puts("Numerical limits");
    printf("  CHAR_BIT \t %d \n", CHAR_BIT);
    printf("  CHAR_MAX \t %d \n", CHAR_MAX);
    printf("  CHAR_MIN \t %d\n", CHAR_MIN);
    printf("  SCHAR_MIN \t %d \n", SCHAR_MIN);

    printf("  WORD_BIT \t %d \n", WORD_BIT);
    printf("  INT_MAX \t %d \n", INT_MAX);
    printf("  INT_MIN \t %d \n", INT_MIN);
    printf("  UINT_MAX \t %u \n", UINT_MAX);
    
    printf("  LONG_BIT \t %d \n", LONG_BIT);
    printf("  LONG_MAX \t %ld \n", LONG_MAX);
    printf("  LONG_MIN \t %ld \n", LONG_MIN);
    printf("  ULONG_MAX \t %lu \n", ULONG_MAX);
    printf("  LLONG_MIN \t %lld \n", LLONG_MIN);
    printf("  LLONG_MAX \t %lld \n", LLONG_MAX);
    printf("  ULLONG_MAX \t %llu \n", ULLONG_MAX);

    printf("  SCHAR_MAX \t %d  \n", SCHAR_MAX);
    printf("  UCHAR_MAX \t %d \n", UCHAR_MAX);
    
    printf("  SHRT_MAX \t %d \n", SHRT_MAX);
    printf("  USHRT_MAX \t %u \n", USHRT_MAX);
    printf("  SHRT_MIN \t %d \n", SHRT_MIN);
    
    printf("  SSIZE_MAX \t %ld \n", SSIZE_MAX);
    
    
    return EXIT_SUCCESS;
}