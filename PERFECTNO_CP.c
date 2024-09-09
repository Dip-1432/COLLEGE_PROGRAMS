//WAP to check whether a number is perfect or not
//28=1+2+4+7+14,,36!=1+2+3+4+6+9+12+18....number=sum of its factors excluding the number itself
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to check whether it is a perfect number or not :\n");
    scanf("%d",&n);
    int a=1,s=0;
    while(n>a) //loop to check factors and add them up
    {
        if (n%a==0) //to get the factors of the number
        {
            s=s+a; // to sum up the factors of the number
        }
        a=a+1;
    }   
    if(n==s) //condition to check for perfect number
    {
        printf("The given number %d is a perfect number",n);
    }
    else
    {
        printf("The given number %d is not a perfect number",n);
    }
}