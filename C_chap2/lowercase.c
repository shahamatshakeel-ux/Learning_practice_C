#include <stdio.h>
int main()
{
    char ch;
    printf("Enter charecter: ");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("lower case letter!");
    }
    else
    {
        printf("Non lower case letter!");
    }
    return 0;
}