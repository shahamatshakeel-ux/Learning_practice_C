#include<stdio.h>
int main() {
    int length;
    int breadth;
    int area;
    
    printf("Enter the length of rectangle =");
    scanf("%d", &length);
    printf("Enter the breadth of rectangle =");
    scanf("%d", &breadth);
    
    area=length*breadth;

    printf("Area of rectangle = %d cm^2", area);
    return 0;
// }
// #include <stdio.h>
// int main() {
//     //THis is necesarryy for exicute all code called "boiler plate code".
//     int length = 23;
//     int breadth = 34;
//     int area = length * breadth;

//     printf("Area of rectangle = %d cm^2", area);
//     return 0;
// }