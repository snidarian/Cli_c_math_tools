// program will calculate factorial of first integer argument
// !5 = 5 * 4 * 3 * 2 * 1
// compile this in order to use it. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char * argv[])
{
    // unsigned long long int to reach high values
    unsigned long long int sum = 1;
    
    if (argc == 1 || argc > 2)
    {
        printf("Argument Error: Supply only one integer argument.\n");
        return -1;
    }
    else
    {
        int long i;
        char *pointertoargv = argv[1];
        int value = atoi(pointertoargv);
        for(i = value; i>0; i--)
        {
            sum *= i;
        }
    }
    
    // setlocal - adds comas
    setlocale(LC_NUMERIC, "");
    printf("%'llu\n", sum);

    return 0;

}









