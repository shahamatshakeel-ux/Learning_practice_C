#include <stdio.h>

// Function 1: add() — do numbers ka sum nikalta hai
int add(int a, int b) {
    int sum = a + b;
    return sum;   // sum return kar raha hai
}

// Function 2: square() — kisi number ka square nikalta hai
int square(int x) {
    int square = x * x; 
    return square;  // square return kar raha hai

}

int main() {
    int a, b;
    printf("Enter a = ");
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d", &b);

    int result = add(a, b);       // add() call hua, 5 return hua
    int final = square(result);   // square(5) call hua, 25 return hua

    printf("Final Result = %d\n", final);

    return 0;
}
