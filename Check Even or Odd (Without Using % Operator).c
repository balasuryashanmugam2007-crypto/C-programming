#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num / 2) * 2 == num) {
        printf("Even Number");
    }
    else {
        printf("Odd Number");
    }

    return 0;
}
