#include <stdio.h>

int main() {
    int temp;

    printf("Enter temperature: ");
    scanf("%d", &temp);

    if (temp < 0)
        printf("Freezing\n");
    else if (temp <= 15)
        printf("Cold\n");
    else if (temp <= 30)
        printf("Normal\n");
    else
        printf("Hot\n");

    return 0;
}
