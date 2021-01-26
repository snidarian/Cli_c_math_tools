// displays square root of argv[1] to stdout

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{

    if (argc == 2)
    {
        char *pointertoarg = argv[1];
        float value = atof(pointertoarg);
        float square_root; 

        square_root = sqrt(value);

        printf("%.4f\n", square_root);
    }
    else
    {
        printf("Error: only one arguement allowed: ");
        printf("arg count is: %d\n", (argc -1));
    }
    


return 0;
}





