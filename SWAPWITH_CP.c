//WAP to swap two numbers with using a third variable
/*ALGORITHM:
The easiest method to swap two numbers is to use a temporary variable to hold one of the values,
then assign the value of the second variable to the first
and finally, we assign the temporary value to the second variable.
*/
#include<stdio.h>
int main ()
{
	int a,b,sw; 
	printf("Enter two numbers to swap :\n");
	scanf("%d",&a); 
	scanf("%d",&b);
    printf("Before swapping: %d & %d respectively\n",a,b);  // printing before swapping 
	sw=a;    // swapping 
	a=b;    // using third variable
	b=sw;
	printf("After swapping: %d & %d respectively\n",a,b);  // printing after swapping
	return 0;
}