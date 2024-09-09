//WAP to check whether a number is palindrome or not
// Ex: 121=121,134!=431...the number =reverse of the number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to get its reverse :\n");
    scanf("%d",&n);
    int a,reverse=0;
    int N=n; //assigning the value of n to a new variable N cause after the loop the value of n will be 0
    while(n>0) //loop to reverse a number
    {
        a=n%10;  //to get the last digit of the number
        reverse=(reverse*10)+a;  //formula for reverse
        n=n/10;  //to eliminate the last digit of the number
    }   
    printf("Actual number : %d \n",N);
    printf("Reversed number : %d",reverse);
    return 0;
}