// program to check whether a number is prime or not by using a do_while loop.
#include <stdio.h>
int main()
{
    int num;
    int i = 2;
    int prime = 1;
    printf("enter number = ");
    scanf("%d", &num);
    if (num >= 0)
    {
        do
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
            i++;
        } while (i <= num / 2);

        if (prime && num != 1 && num != 0)
        {
            printf("%d is a prime number\n", num);
        }
        else
        {
            printf("%d is not a prime number\n", num);
        }
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}