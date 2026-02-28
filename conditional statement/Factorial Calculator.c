#include <stdio.h>

int main() {
    int num, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial not defined for negative numbers\n");
    else {
        for (i = 1; i <= num; i++)
            fact *= i;

        printf("Factorial = %lld\n", fact);
    }

    return 0;
}
