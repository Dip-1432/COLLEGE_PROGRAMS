//Find sum of consecutive odd and even numbers using while loop
#include<stdio.h>
int main()
{
    int n, even = 0, odd =0;
    printf("Enter a natural number: \n");
    scanf("%d", &n);
    int i=1;
    while(i<n)
    {
        if(i%2==0)
            even += i;
        else
            odd += i;
        i++;
    }
    printf("The sum of odd natural numbers from 1 to %d is: %d\n", n, odd); 
    printf("The sum of even natural numbers from 1 to %d is: %d\n", n, even);
    return 0;
}