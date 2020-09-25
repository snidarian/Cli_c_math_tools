// This simple program calculates the mean of a given population and
// then calculates one standard deviation based on that populations mean
// In a future version of this program I will add user input functionality to this program

#include <stdio.h>
#include <math.h>

#define POPSIZE 10


int main() {


    int sample_pop[POPSIZE] = {4, 2, 7, 3, 10, 2, 8, 1, 5, 4};
    double mean, total, sum_of_squares;
    double std_dev_of_sample, sum_before_square_root, sqrt_calc_var;
    int i;

// code below calculates the sample mean
        for (i=0; i < POPSIZE; ++i) {
            total += sample_pop[i];
        
    }
    mean = (total / POPSIZE);
    printf("Sample Mean\n%f\n", mean);

// Subtract each individual value by the mean, square it and add to sum
    sum_of_squares = 0;
    for (i = 0; i<POPSIZE; ++i) {
        sum_of_squares += ((sample_pop[i] - mean) * (sample_pop[i] - mean));
        printf("\n%d - %.2f", i, sum_of_squares);
    }
printf("\n---------------------------------------");
printf("\nTotal to be divided by 'sample population -1'\n%.2f\n", sum_of_squares);


// Divide the total sum by the population size minus 1

sum_before_square_root = sum_of_squares / (POPSIZE-1);

printf("\nAfter dividing sum of squares by sample population -1:\n%.2f\n", sum_before_square_root);


// Finally calculates the Sample standard deviation by taking the square root of the sum
// This for loop is a sort of work around to get the square root of 'sum_before_square_root'. I had to do this because I couldn't get the sqrt function in math.h header to work properly..
for(sqrt_calc_var = 0.01; sqrt_calc_var*sqrt_calc_var < sum_before_square_root; sqrt_calc_var+=0.01);
    std_dev_of_sample += sqrt_calc_var;
// std_dev_of_sample = sqrt(sum_before_square_root);



printf("\nSample Standard Deviation:\n%.2f\n", std_dev_of_sample);





}















