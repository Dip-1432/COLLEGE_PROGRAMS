//Find the area and perimeter of a rectangle
// area=length*breadth       perimeter=2*(length + breadth)

#include <stdio.h>

int main() {
    float length, breadth, area, perimeter; //initialization

    printf("Enter the length of the rectangle: \n");
    scanf("%f", &length); //taking input from user

    printf("Enter the breadth of the rectangle: \n");
    scanf("%f", &breadth); //user input

    area = length * breadth; //calculation of area
    perimeter = 2 * (length + breadth); //calculation of perimeter

    printf("Area of the rectangle: %.2f\n", area); // prints the area
    printf("Perimeter of the rectangle: %.2f\n", perimeter); // prints the perimeter

    return 0;
}