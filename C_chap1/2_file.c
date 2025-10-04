#include<stdio.h>

int main() {
    int a;
    int b;
    char name[] = {1,2,23,4,5,6,7,8,9,};
    char ch;
    printf("enter the value of a =");
    scanf(" %d", &a);
    
    printf("enter the value of b =");
    scanf(" %d", &b);

    printf("enter the value of ch =");
    scanf(" %c", &ch);

    printf("size of int is %d bites\n", sizeof(a));
    printf("size of int is %d bites\n", sizeof(b));
    printf("size of int is %d bites\n", sizeof(a+b));
    printf("size of char is %d bites\n", sizeof(ch));
    printf("size of char array is %d bites\n", sizeof(name));
    return 0;
    
}