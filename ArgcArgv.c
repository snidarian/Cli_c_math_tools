// Just a file to test out using arguments in the main function
#include <stdio.h>




int main(int argc, char **argv) {
    int i = 0;

    // Just a simple for loop that spits out the string you pass as the argument
    for (i = 0; i < argc; ++i) {
        printf("\nArgument number %d - %s", i, argv[i]);
    }

    printf("\nfinish\n");

return 0;
}










