#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 1 && num <= 50)
        printf("Number is between 1 and 50\n");
    else if (num <= 100)
        printf("Number is between 51 and 100\n");
    else
        printf("Number is greater than 100\n");

    return 0;
}
