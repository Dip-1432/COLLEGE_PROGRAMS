// Find the sum of n natural number using while loop
#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a natural number: \n");
    scanf("%d", &n);
    int i=1;
    while(i<n)
    {
        sum += i;
        i++;
    }
    printf("The sum of natural numbers from 1 to %d is: %d\n", n, sum); 
    return 0;
}