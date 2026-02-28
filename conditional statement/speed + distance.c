#include <stdio.h>

int main() {
    float X, Y, distance, time;

    printf("Enter Jerry's speed (m/s): ");
    scanf("%f", &X);

    printf("Enter Tom's speed (m/s): ");
    scanf("%f", &Y);

    printf("Enter initial distance between them (meters): ");
    scanf("%f", &distance);

    if (Y <= X) {
        printf("Tom will NOT be able to catch Jerry.\n");
    } else {
        time = distance / (Y - X);
        printf("Tom WILL catch Jerry.\n");
        printf("Time taken to catch Jerry = %.2f seconds\n", time);
    }

    return 0;
}
