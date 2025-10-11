#include<stdio.h>
void calculate(float value);// perameter 
void calculate(float value){
    value = value + (0.18 * value);
    printf("Final price is : %.3f", value);
}
int main(){
    float amount = 100.00;//Argument => "amount" is copy on perameter not fixed change the argument argument is also same 
    calculate(amount);
    printf("\nArgument is not change you see: %.3f",amount);
}