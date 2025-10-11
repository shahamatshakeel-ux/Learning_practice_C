#include<stdio.h>
int factorial(int n);
int factorial(int n){
    if (n == 1 || n == 0)
    return 1;
    return factorial(n-1)*n;
}
int main(){
    int fac = factorial(7);
    printf("%d",fac);

    return 0;
}
