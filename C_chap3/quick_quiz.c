#include <stdio.h>
int main() {
    int n = 100;
    for (int i = n; i > 0; i--)
     {
        if (i == 80){
            printf("this will skip 80\n");
            continue;
        }
        printf("%d\n", i);

    }
    return 0;
}