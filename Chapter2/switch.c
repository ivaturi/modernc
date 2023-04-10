#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[argc + 1]){

    if (argc < 2) {
        printf("error: missing command line arguments\n");
        return EXIT_FAILURE;
    }
    
    char* in = argv[1];
    
    switch(*in){
        case 'y':
            puts("Yes!");
            break;
        default:
            puts("huh?");
            break;
    }

    return EXIT_SUCCESS;
}