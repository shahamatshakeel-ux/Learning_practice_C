// program to find factorial of a number.
#include <stdio.h>
int main() {
    int num;
    int multiply = 1;
    printf("Enter number to find factorial = ");
    
    scanf("%d", &num);
    for (int i =num; i>= 1; i--){
        multiply = multiply * i;
    }
    printf("the factorial of %d is %d\n", num, multiply);
    return 0;
}