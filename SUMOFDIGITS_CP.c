// Write a program to print Sum of digits
#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter a number: \n");
    scanf("%d", &num);
    while (num!= 0) 
    {
        sum += num % 10; //adds the last digit of the number
        num /= 10;       //removes the last digit from the number
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}