#include <stdio.h>

int main() {
    float height, weight, bmi;

    printf("Enter height (in meters): ");
    scanf("%f", &height);

    printf("Enter weight (in kg): ");
    scanf("%f", &weight);

    bmi = weight / (height * height);

    printf("BMI = %.2f\n", bmi);

    if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi < 25)
        printf("Normal\n");
    else if (bmi < 30)
        printf("Overweight\n");
    else
        printf("Obese\n");

    return 0;
}
