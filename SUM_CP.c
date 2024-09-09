// write a program to find the addition of two numbers
#include<stdio.h> // to include standard library functions that includes scanf(),printf()
int main()
{
    int a,b,s=0;  //initialization of two variables(a,b) and a variable(s) to find their sum
    printf("Enter two numbers to find their sum: \n");
    scanf("%d %d",&a,&b);    // to take input of 2 integers from user
    s=a+b;                   // sum of two variables
    printf("The sum of %d and %d is : %d\n",a,b,s);   // print the sum
    return 0; // to terminate the program with return 0 indicating success running the program
}