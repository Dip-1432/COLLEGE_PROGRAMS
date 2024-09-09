//Write a program to find the square root of a number
#include <stdio.h>
#include <math.h>
int main()
{
    int number; double squareRoot;  // initalization
    printf("Enter a positive integer to find out its square root: \n");
    scanf("%u", &number); //to take an user input of an unsigned integer
    squareRoot = sqrt(number); //calculate the square root
    printf("The square root of the number %u is :%.2lf",number,squareRoot);
    return 0;
}