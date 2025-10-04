#include <stdio.h>
#include <string.h>
int main()
{

    int sub1, sub2, sub3;
    int sum;
    float percentage_1, percentage_2, percentage_3, percentage;
    

    printf("Enter marks for subject_1: ");
    scanf("%d", &sub1);
    printf("Enter marks for subject_2: ");
    scanf("%d", &sub2);
    printf("Enter marks for subject_3: ");
    scanf("%d", &sub3);
    printf("Your marks in subject_1, subject_2, subject_3 are: %d, %d, %d\n", sub1, sub2, sub3);

    sum = sub1 + sub2 + sub3;
    percentage_1 = (sub1 / 100.0) * 100;
    percentage_2 = (sub2 / 100.0) * 100;
    percentage_3 = (sub3 / 100.0) * 100;
    percentage = (sum / 300.0) * 100;

    printf("Total marks: %d\n", sum);
    printf("Total Percentage: %.2f%%\n", percentage);

    if (percentage < 40)
    {
        if (percentage_1 < 33 || percentage_2 < 33 || percentage_3 < 33)
        {
            printf("You are fail due to less percentage in one or more subjects or your total percentage also less than 40\n");
        }
        else
        {
            printf("You are fail due to less overall percentage\n");
        }
        return 0;
    }
 if (percentage_1 < 33 || percentage_2 < 33 || percentage_3 < 33)
    {
        printf("You are fail due to less percentage in one or more subjects\n");
    }   
    else
    {
        printf("You are pass\n");
    }


    return 0;
}