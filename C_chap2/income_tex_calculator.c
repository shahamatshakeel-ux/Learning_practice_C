#include <stdio.h>
int main()
{
    int income;
    printf("Enter your annual income: ");
    scanf("%d", &income);
    float tax;
    float income_after_tax;

    if (income <= 250000)
    {
        tax = 0;
        income_after_tax = income - tax;
    }
    else if (income > 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
        income_after_tax = income - tax;
    }
    else if (income >= 500000 && income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
        income_after_tax = income - tax;
    }
    else
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
        income_after_tax = income - tax;
    }
    printf("Tax = %.2f\n", tax);
    printf("Your income after tax is: %.2f\n", income_after_tax);
    return 0;
}