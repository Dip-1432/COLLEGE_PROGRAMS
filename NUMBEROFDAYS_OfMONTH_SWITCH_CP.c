// Write a program that takes input of the month and then prints the total number of days of that month
// use switch case

#include <stdio.h>

int main() {
    int month, days;
    printf("\n 1. January");
    printf("\n 2. February");
    printf("\n 3. March");
    printf("\n 4. April");
    printf("\n 5. May");
    printf("\n 6. June");
    printf("\n 7. July");
    printf("\n 8. August");
    printf("\n 9. September");
    printf("\n 10. October");
    printf("\n 11. November");
    printf("\n 12. December \n");
    printf("Enter the month number (1-12): \n");
    scanf("%d", &month);
    
    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("days = 31");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("days = 30");
            break;
        case 2:
            printf("days = 28");
            break;
        default:
            printf("\n Invalid month number");
            return 0;
    }
}
