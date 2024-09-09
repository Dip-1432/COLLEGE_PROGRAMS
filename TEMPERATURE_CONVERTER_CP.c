//Write a program to convert degrees Fahrenheit into degrees celsius
// FORMULA : C=(F-32)*5/9

#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: \n");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5/9;

    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}