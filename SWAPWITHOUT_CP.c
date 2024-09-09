//WAP to swap two numbers without using a third variable
//In this method, we use arithmetic operations to swap the values without using a temporary variable.
#include<stdio.h>
int main ()
{
	int a,b;
	printf("Enter two numbers to swap :\n");
	scanf("%d",&a);
	scanf("%d",&b);
    printf("Before swapping, the numbers are: %d & %d respectively \n",a,b);  // printing before swapping 
    // Swapping using arithmetic operations
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping, the numbers are: %d & %d respectively",a,b);  // printing after swapping   
	return 0;
}