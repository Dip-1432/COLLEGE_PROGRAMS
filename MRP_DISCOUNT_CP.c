//Write a program to take MRP and based on that give discount and tell the final price
/*
    MRP :- DISCOUNT
    <5000 :- 0%
    5000-10000 :- 5%
    10000-20000 :- 10%
    >20000 :- 15%
*/

#include<stdio.h>
int main() {
    double mrp, discount;
    printf("Enter the MRP: \n");
    scanf("%lf", &mrp);
    if(mrp < 5000)
        discount = 0 * mrp;
    else if(mrp >= 5000 && mrp <= 10000)
        discount = 0.05 * mrp;
    else if(mrp > 10000 && mrp <= 20000)
        discount = 0.10 * mrp;
    else
        discount = 0.15 * mrp;
    
    double finalPrice = mrp - discount;

    printf("The discount is %.2lf\n", discount );
    printf("The final price is %.2lf\n", finalPrice );
    return 0;
}