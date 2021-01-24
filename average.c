// program that takes the average of an indefinite list of command line argument integers

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{

    int i;
    float sum = 0;
    int count = argc;

    for(i=1; i < argc; ++i)
    {
        
        // need to convert each string argument to integer or float and then add them to sum
        char *pointertoargv = argv[i];
        sum += atof(pointertoargv);
        

    }

    float average = (sum / (count - 1));

    printf("%.3f\n", average);


    return 0;
}














