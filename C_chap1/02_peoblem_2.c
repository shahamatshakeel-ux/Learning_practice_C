#include <stdio.h>
int main() {
   int r;
   int height;
   float area;
   float volume;
    printf("Enter the radius of circle =");
    scanf("%d", &r);

    printf("Enter the height of cylinder =");
    scanf("%d", &height);

    area = 3.14 * r * r;
    
    volume = 3.14 * r * r * height;

    printf("Area of the circle = %.2f\n", area);
    printf("Volume of the cylinder = %.2f\n", volume);
    return 0;
}