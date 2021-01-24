// program that takes the average of an indefinite list of command line argument integers

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    printf("Start argc: %d\n", argc);
    printf("Start argv: %s\n", argv[1]);
    int i;
    float sum = 0;
    int count = argc;

    for(i=1; i < argc; ++i)
    {
        
        // need to convert each string argument to integer or float and then add them to sum
        char *pointertoargv = argv[i];
        sum += atoi(pointertoargv);
        
        // printf("The number of arguments is %d\n", argc);
        // printf("The current argv of i=%d is: %s\n", i, argv[i]);

        // printf("sum = %f\n", sum);

    }

    float average = (sum / (count - 1));

    printf("%.3f\n", average);


    return 0;
}














