// Returns the sum of all integer/float cli arguments

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    printf("argc: %d\n", argc);
    float sum = 0;

    if (argc == 1)
    {
        printf("Error: Supply at least one argument\n");
        return -1;
    }
    else
    {
        for(int i=1; i < argc ; i++)
        {
            char *pointertoargv = argv[i];
            sum += atof(pointertoargv);
        }
    }
    
    printf("sum: %f\n", sum);

    return 0;
}





















