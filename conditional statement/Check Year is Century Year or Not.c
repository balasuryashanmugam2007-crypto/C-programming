#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 100 == 0) {
        printf("%d is a Century Year.", year);
    }
    else {
        printf("%d is not a Century Year.", year);
    }

    return 0;
}
