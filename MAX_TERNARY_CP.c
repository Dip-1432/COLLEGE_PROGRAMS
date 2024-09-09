//Write a program to check the maximum number using ternary operator
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers to find out the maximum :\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c) 
    {
        printf("All the numbers are equal");
        return 0;
    }
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Maximum number is : %d\n", max);
    return 0;
}