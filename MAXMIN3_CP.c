//Write a program to check whether a number is maximum or minimum among 3 numbers
// USING NESTED LOOPS ONLY
/* ALGORITHM:
    Check if a is greater than to b and a is also greater than to c. 
    If both conditions are true, a is the largest.
    Otherwise, c is the largest.
    If a is not greater than b and b is greater than or equal to c, b is the largest.
    Otherwise, c is the largest.
*/

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers to find out the maximum :\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c) 
    {
        printf("All the numbers are equal");
        return 0;
    }
    if(a>b) // OUTER LOOP
    {
        if(a>c)
            printf("%d is the maximum number",a);
        else // INNER LOOP
            printf("%d is the maximum number",c);
    }
    else  // OUTER LOOP
    {
        if(b>c) //INNER LOOP
            printf("%d is the maximum number",b);
        else // INNER LOOP
            printf("%d is the maximum number",c);
    }
    return 0;
}