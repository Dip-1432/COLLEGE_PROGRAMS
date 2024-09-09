// Write a program to check whether a number is maximum or minimum in more efficient
// way using 3 variables
#include <stdio.h>
int main()
{
    double a,b,max,min;
    printf("Enter two numbers(can be decimal also) to find out max and min: \n");
    scanf("%lf %lf",&a,&b);
    if(a==b)
    {
        printf("Both numbers are equal.\n");
        return 0;  // Return 0 to terminate the program if both numbers are equal.
    }
    else if(a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    printf("Maximum: %.2lf\n",max); 
    printf("Minimum: %.2lf\n",min);
    return 0;
}
