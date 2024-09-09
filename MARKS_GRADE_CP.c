//Write a program by taking marks and based on that print the grade
/* 
    MARKS :- GRADE
    90-100 : A+
    80-89  : A
    60-79  : B
    40-59  : C
    0-40  : Fail
*/

#include<stdio.h>
int main() {
    int marks;

    printf("Enter your marks: \n");
    scanf("%d", &marks);
    if(marks >= 90) {
        printf("Grade: A+\n");
    } 
    else if(marks >= 80) {
        printf("Grade: A\n");
    } 
    else if(marks >= 60) {
        printf("Grade: B\n");
    } 
    else if(marks >= 40) {
        printf("Grade: C\n");
    } 
    else {
        printf("Grade: Fail\n");
    }
    return 0;
}