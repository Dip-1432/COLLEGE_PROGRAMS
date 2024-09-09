//WAP to check whether a number is palindrome or not
// Ex: 121=121,134!=431...the number =reverse of the number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to check whether it is palindrome or not :\n");
    scanf("%d",&n);
    int a,n1=0,N=n;
    while(n>0)
    {
        a=n%10;
        n1=(n1*10)+a;
        n=n/10;
    }   
    if(N==n1) // condition to check for palindrome number
    {
        printf("The given number %d is a palindrome number",N);
    }
    else
    {
        printf("The given number %d is not a palindrome number",N);
    }
}