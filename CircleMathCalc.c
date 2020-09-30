// An example-use file for the arithemic operators in section 2.5 of the K&R
// Simple program that calculates circle math from user-supplied circle radius value


#include <stdio.h>


#define PI 3.14159

int main () {
float radius, diameter, circumference, area;

diameter = 0;
radius = 0;
circumference = 0;
area = 0;

printf("Supply the radius of the desired circle: ");
scanf("%f", &radius);


// Diameter -eq two times the radius
diameter = ( radius * 2);

// Circumference -eq pi times circle diameter
circumference = PI * diameter;


// Area -eq (1/2) times circumference times radius
area = (0.5) * circumference * radius;


printf("\n%f - Radius\n%f - Diameter\n%f - Circumference\n%f - Area\n", radius, diameter, circumference, area);




}















