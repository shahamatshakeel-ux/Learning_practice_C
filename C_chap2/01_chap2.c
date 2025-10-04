#include<stdio.h>
int main(){
	// int a;
	// int b;
	
	// printf("Enter a =");
	// scanf("%d", &a);
	
	// printf("Enter b =");
	// scanf("%d", &b);
	
	// int sum = a + b;
	// printf("The sum of %d and %d is:%d",a,b,sum);
//     int a = 4 ;
// 	int b = 6 ;
// 	int c = 8 ;

// 	printf("Display the value of (2*a*b/2/c*b + 4*a) is: %d",2*a*b/2/c*b + 4*a);
// 	return 0;
// }
// int day = 2;
// int main() {
//      printf("Monday"); break;
//      printf("Tuesday"); break;
//      printf("Wednesday"); break;
//      printf("Invalid day");
// }


    int day = 2;
    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        default:
            printf("Invalid day");
    }
    return 0;
}