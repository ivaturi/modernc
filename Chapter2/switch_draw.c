#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[argc + 1]){

    int n_stars = atoi(argv[1]);

    switch (n_stars){
        default: puts("+++++-----+++++");
        case 4: puts("+ + + +");
        case 3: puts("+ + +");
        case 2: puts("+ +");
        case 1: puts("+");
    }

    return EXIT_SUCCESS;

}