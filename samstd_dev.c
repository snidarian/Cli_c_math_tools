// calculates standard deviation, variance and sample mean from sample pop
// To use this to and acquire a sample variance, std deviation and sample mean:
// simply supply float/integer command line arguments of the numbers that compose the sample


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[])
{
    // shutdown of the program if there are not enough arguments to constitute a population
    if (argc == 1 || argc == 2)
    {
        printf("Arguement Error: Supply at least two float/integer arguments: \n");
        return -1;
    }

    // calculate mean or average
    int i;
    float sum = 0;
    int count = argc;

    for(i=1; i < argc; ++i)
    {
        
        char *pointertoargv = argv[i];
        sum += atof(pointertoargv);
        
    }
    float average = (sum / (count - 1));
    printf("Sample mean is: %.5f\n", average);


    float mean = average;
    sum = 0;
    float calc_variance_container;
    
    // Sample variance
    for(i=1; i < argc; ++i)
    {
        char *pointertoargv = argv[i];
        calc_variance_container = atof(pointertoargv);
        calc_variance_container -= mean;
        calc_variance_container = pow(calc_variance_container, 2);
        sum += calc_variance_container;
    }

    float variance_sum = sum;
    // subtract 2 from argc because index 0 is program name
    float variance = (variance_sum / (argc -2));

    printf("Sample variance is: %.3f\n", variance);

    // calculate standard deviation (square root of sample variance)
    float std_deviation = sqrt(variance);

    printf("Sample standard deviation is: %f\n", std_deviation);

    return 0;
}












