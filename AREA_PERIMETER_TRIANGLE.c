// Write a program to find area and perimeter of a Triangle
/* AREA =Heron's Formula           PERIMETER =a+b+c
Calculate the semi-perimeter ( s ):s=(a+b+c​)/2
Then, use the semi-perimeter to find the area ( A ):A=sqrt of [s(s−a)(s−b)(s−c)]​
where ( a ), ( b ), and ( c ) are the lengths of the sides of the triangle.
*/

#include<stdio.h>
#include<math.h> // to include maths library functions which contains sqrt()

int main() {
    float a, b, c, s;double area; // initializations

    printf("Enter the lengths of the sides of the triangle: \n");
    scanf("%f %f %f", &a, &b, &c); // user inputs

    s = (a + b + c) / 2;                           
    area = sqrt(s * (s - a) * (s - b) * (s - c)); // calculation of area

    printf("Area of the triangle: %.2lf\n", area); // printing area12
    printf("Perimeter of the triangle: %.2f\n", a + b + c); // printing perimeter

    return 0;
}