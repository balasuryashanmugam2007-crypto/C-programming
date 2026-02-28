#include <stdio.h>

int main() {
    int choice;
    float a, b;

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (choice == 1)
        printf("Result = %.2f\n", a + b);
    else if (choice == 2)
        printf("Result = %.2f\n", a - b);
    else if (choice == 3)
        printf("Result = %.2f\n", a * b);
    else if (choice == 4)
        printf("Result = %.2f\n", a / b);
    else
        printf("Invalid Choice\n");

    return 0;
}
