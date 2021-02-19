// This wasn't homework or anything it's just a program I wrote to output the values of ASCII characters to stdout
// This is easily achieve by treating chars as integers instead of represented char values
// by formatting printf to print c as an integer (%d) instead of as a char (%s) you can print the ASCII value of a given char
// Type one character followed by Enter to use the program

#include <stdio.h>




int main () {

    int c;

    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            putchar(c);
            printf("\nASCII value of %c = ", c);
            printf("%d\n", c);
    }
}


    return 0;

}





