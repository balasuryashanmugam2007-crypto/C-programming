#include <stdio.h>
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0) {
        printf("Number is a multiple of both 3 and 7.");
    }
    else if (num % 3 == 0) {
        printf("Number is a multiple of 3 only.");
    }
    else if (num % 7 == 0) {
        printf("Number is a multiple of 7 only.");
    }
    else {
        printf("Number is not a multiple of 3 or 7.");
    }

    return 0;
}
