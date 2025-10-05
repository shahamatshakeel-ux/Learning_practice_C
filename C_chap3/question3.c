// program to print the sum of first n natural numbers.
#include <stdio.h>
int main() {
    int i = 1;
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    // while (i <= n)
    // {
    //     sum += i; // sum = sum + i;
    //     i++;
    // }
    // for (i = 1; i <= n; i++)
    // {
    //     sum += i; // sum = sum + i;
    // }
    do{
        sum += i; // sum = sum + i;
        i++;
    } while (i <= n);
    printf("The sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}