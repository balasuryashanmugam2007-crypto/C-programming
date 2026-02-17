#include <stdio.h>

int main() {
    float salary, bonus;

    printf("Enter your basic salary: ");
    scanf("%f", &salary);

    if (salary <= 10000) {
        bonus = salary * 0.20;   // 20% bonus
    }
    else if (salary <= 20000) {
        bonus = salary * 0.15;   // 15% bonus
    }
    else {
        bonus = salary * 0.10;   // 10% bonus
    }

    printf("Bonus = Rs. %.2f\n", bonus);
    printf("Total Salary after Bonus = Rs. %.2f", salary + bonus);

    return 0;
}
