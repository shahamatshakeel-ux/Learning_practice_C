#include <stdio.h>
int fabonacci_term(int term){
    if(term == 1)
    return 0;
    if (term == 2)
    return 1;
    return fabonacci_term(term - 1) + fabonacci_term(term -2);
}
int main() {
    int n;
    printf("Enter fabonacci term number: ");
    scanf("%d",&n);
    printf("The term is:%d",fabonacci_term(n));
    return 0;
}