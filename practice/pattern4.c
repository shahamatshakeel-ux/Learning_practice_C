#include<stdio.h>
int main(){
    int line = 5;
    for(int raw = 0; raw < line; raw++){
        for(int col = 0; col <= line ; col++){
            printf("%d ",col+1);            
        }
        printf("\n");
    }
    return 0;
}