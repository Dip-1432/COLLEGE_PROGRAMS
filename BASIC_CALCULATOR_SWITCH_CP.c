// Switch case Choices Program
/*
    1.ADDITION
    2.SUBTRACTION
    3.MULTIPLICATION
    4.DIVISION
*/ 
#include <stdio.h>
int main()
{
    int a,b,choice,result;
    printf("\n 1.addition\n");
    printf(" 2.subtraction\n");
    printf(" 3.multiplication\n");
    printf(" 4.division\n");
    printf("Enter your choice (1-4): \n");
    scanf("%d",&choice);
    if (choice<=4 && choice>=1)
    {
        printf("Enter two numbers: \n");
        scanf("%d%d",&a,&b);
    }
        switch(choice)
        {
            case 1:
                result = a+b;
                printf("The sum is: %d\n",result);
                break;
            case 2:
                result = a-b;
                printf("The difference is: %d\n",result);
                break;
            case 3:
                result = a*b;
                printf("The product is: %d\n",result);
                break;
            case 4:
                if(b!=0)
                {
                    result = a/b;
                    printf("The quotient is: %d\n",result);
                }
                else
                {
                    printf("Error! Division by zero is not allowed.");
                }
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
        return 0;
}