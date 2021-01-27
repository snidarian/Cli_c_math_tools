
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{

    if (argc == 2)
    {
        char *pointertoarg = argv[1];
        float value = atof(pointertoarg);

        printf("%.4f\n", (pow(value, 2)));
    }
    else
    {
        printf("Error: only one arguement allowed: ");
        printf("arg count is: %d\n", (argc -1));
    }
    


return 0;
}

