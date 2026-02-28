#include <stdio.h>

int main() {
    int age, credit;
    float income;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter monthly income: ");
    scanf("%f", &income);

    printf("Enter credit score: ");
    scanf("%d", &credit);

    if (age >= 21 && income >= 25000 && credit >= 700)
        printf("Eligible for Loan\n");
    else
        printf("Not Eligible for Loan\n");

    return 0;
}
