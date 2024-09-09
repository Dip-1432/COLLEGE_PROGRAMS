// Write a program to find the area of a circle
// area = 3.14*radius*radius

#include <stdio.h>

int main() {
    double radius; // initializing radius

    printf("Enter the radius of the circle: \n"); //    [(\n) creates a new line]
    scanf("%lf", &radius);  //taking input of radius in decimals

    double area = 3.14 * radius * radius; // calculating area
    printf("The area of the circle is %.2lf\n", area);  //printing area[(%.2) gives output upto 2 decimal places]

    return 0;
}