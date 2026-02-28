#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 40)
        printf("Pass\n");
    else if (marks >= 35)
        printf("Pass with Grace Marks\n");
    else
        printf("Fail\n");

    return 0;
}
