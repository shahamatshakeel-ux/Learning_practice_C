#include <stdio.h>
int main() {
    int i = 1;
    int num ;
    printf("enter number = ");
    scanf("%d", &num);
   
   do 
   {
        printf("%d\n", i);
        i++;
   }while(i <= num);
   
    return 0;
}
