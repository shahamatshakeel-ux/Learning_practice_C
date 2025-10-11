#include<stdio.h>
int main(){
    int raw = 5;
    for(int i = 0; i < raw; i++){
        for(int j = raw ; j > i; j--){
            printf(" ");
            
        }
        printf("\n");
    }

    return 0;
}