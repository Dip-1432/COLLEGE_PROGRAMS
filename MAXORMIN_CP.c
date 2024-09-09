//Write a program to check whether a number is maximum or minimum between two numbers
#include <stdio.h>
int main()
{
    double a,b;
    printf("Enter two numbers(can be decimal also) to find out max and min: \n");
    scanf("%lf %lf",&a,&b);
    if(a==b)
    {
        printf("Both numbers are equal.\n");
    }
    else if(a>b)
    {
        printf("%.2lf is maximum.\n",a);
        printf("%.2lf is minimum.\n",b);
    }
    else
    {
        printf("%.2lf is maximum.\n",b);
        printf("%.2lf is minimum.\n",a);
    }
    return 0;
}
