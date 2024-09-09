// Factorial of n numbers using while loop
#include<stdio.h>
int main()
{
    int n, i=1, factorial = 1;
    printf("Enter a number to find its factorial: \n");
    scanf("%d", &n);
    while(i<=n)
    {
        factorial *= i;
        i++;
    }
    printf("Factorial of %d is : %d",n,factorial);
    return 0;
}