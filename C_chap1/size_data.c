#include <stdio.h>
int main() {
   //THis is necesarryy for exicute all code called "boiler plate code".
 
    printf("Hello, shahamat shakeel\n");
    sizeof(int);
    int a = 5; 
    sizeof(float);
    float b = 5.5;
    sizeof(double);
    double c = 5.555;
    sizeof(char);
    char d = 'A';

    printf("The size of int is %d bytes\n", sizeof(a));
    printf("The size of float is %d bytes\n", sizeof(b));
    printf("The size of double is %d bytes\n", sizeof(c));
    printf("The size of char is %d bytes\n", sizeof(d));

    return 0;
   
}