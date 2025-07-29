// else if example
#include <stdio.h>
void main() {
    int grade;
    printf("Enter grade: ");
    scanf("%d", &grade);
    printf("Your grade in USA is: ");
    if (grade >= 90)
        printf("A\n");
    else if (grade >= 80)
        printf("B\n");
    else if (grade >= 70)
        printf("C\n");
    else if (grade >= 60)
        printf("D\n");
    else
        printf("Failed\n");
}