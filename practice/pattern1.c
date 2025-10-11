#include<stdio.h>
int main(){
    int line = 5;
    for(int raw = 0; raw < line; raw++){
        for(int col = raw; col >= 0 ; col--){
            printf(". ");            
        }
        printf("\n");
    }
    return 0;
}