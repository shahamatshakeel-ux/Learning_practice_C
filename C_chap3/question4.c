#include <stdio.h>
int main() {
    int num;
    int i =1;
    int sum = 0;
    printf("enter number = ");
    scanf("%d", &num);
    for(i = 1; i <= 10; i++)
    {
        int multiply = num * i;
        sum += multiply;
    }
    printf("the sum of table of %d is %d\n", num, sum);
    return 0;
}