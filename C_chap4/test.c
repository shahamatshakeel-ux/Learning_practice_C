#include <stdio.h>
int main() {
    int num = 496;
    int sum = 0;
    for(int i = 1; i <= num / 2; i++){
        int reminder = num % i;
        if(reminder == 0)
        sum = sum + i;
    }
    printf("%d",sum);
    return 0;
}