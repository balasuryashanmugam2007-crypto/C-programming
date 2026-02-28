#include <stdio.h>

int main() {
    int totalClasses, attended;
    float percentage;

    printf("Enter total classes held: ");
    scanf("%d", &totalClasses);

    printf("Enter classes attended: ");
    scanf("%d", &attended);

    percentage = (attended * 100.0) / totalClasses;

    printf("Attendance Percentage = %.2f%%\n", percentage);

    if (percentage >= 75)
        printf("Eligible for Exam\n");
    else
        printf("Not Eligible for Exam\n");

    return 0;
}
