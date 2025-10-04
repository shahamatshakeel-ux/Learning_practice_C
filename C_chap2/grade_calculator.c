#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    char grade;
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)

        grade = 'A';

    else if (marks >= 80 && marks < 90)

        grade = 'B';

    else if (marks >= 70 && marks < 80)

        grade = 'C';

    else if (marks >= 60 && marks < 70)

        grade = 'D';

    else

        grade = 'F';

    printf("Your grade is: %c\n", grade);
    return 0;
}