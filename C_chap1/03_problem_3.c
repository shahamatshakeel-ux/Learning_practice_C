#include <stdio.h>
int main() {
    int c;
    float f;

    printf("Enter temperature in celsius =");   
    scanf("%d", &c);

    f = (c * 9.0/5.0) + 32;

    printf("Temperature in Fahrenheit = %.2f\n", f);
    return 0;
}