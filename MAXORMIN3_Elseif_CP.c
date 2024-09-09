//Write a program to check whether a number is maximum or minimum among 3 numbers
// in a more improved way,,, to demonstrate else_if
#include <stdio.h>
int main()
{
    double a,b,c,max;
    printf("Enter three numbers(can be decimal also) to find out max and min: \n");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("All numbers are equal.\n");
        return 0;  // Return 0 to terminate the program if both numbers are equal.
    }
    else if(a>b && a>c)
        max=a;
    else if (b>c && b>a)
        max=b;
    else 
        max=c;
    printf("Maximum: %.2lf\n",max); 
    return 0;
}

