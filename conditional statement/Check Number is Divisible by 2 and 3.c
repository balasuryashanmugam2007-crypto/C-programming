#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0 && num % 3 == 0) {
        printf("Number is divisible by both 2 and 3.");
    }
    else if (num % 2 == 0) {
        printf("Number is divisible by 2 only.");
    }
    else if (num % 3 == 0) {
        printf("Number is divisible by 3 only.");
    }
    else {
        printf("Number is not divisible by 2 or 3.");
    }

    return 0;
}
