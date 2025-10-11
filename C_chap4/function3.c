#include <stdio.h>
float convert_temp(float c){
    float f = (c * 9.0/5.0) + 32;
    return f;
}

int main() {
    float far = convert_temp(0);
    printf("print temp in farhenhite:%.3f",far);
    return 0;
}