#include <stdio.h>

int main() {
    int marks;
    float income;

    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("Enter family income: ");
    scanf("%f", &income);

    if ((marks >= 85 && income < 200000) || (marks >= 95))
        printf("Scholarship Eligible\n");
    else
        printf("Not Eligible\n");

    return 0;
}
