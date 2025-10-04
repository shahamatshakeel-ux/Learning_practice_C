#include <stdio.h>
int main() {
    int P; // Principal (jo amount tumne diya/liye)
    int R; // Rate of interest (saalana sood/profit dar)
    int T; // Time (kitne saal tak)
    float SI; // Simple Interest

    printf("Enter Principal amount (P): ");
    scanf("%d", &P);

    printf("Enter Rate of interest (R) in percentage: ");
    scanf("%d", &R);

    printf("Enter Time (T) in years: ");
    scanf("%d", &T);

    // Simple Interest formula: SI = (P * R * T) / 100
    SI = (P * R * T) / 100.0;

    printf("Simple Interest (SI) is: %.2f\n", SI);

    return 0;
}