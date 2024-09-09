//Write a program to check whether a number is odd or even
// Even:completely gets divided by 2        Odd:completely not gets divided by 2  

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);

    if (num % 2 == 0) // condition for odd or even number
    {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}