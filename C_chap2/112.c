#include <stdio.h>
int main()
{
    int transaction;
    int location;
    int number_of_transactions;

    printf("Please enter the transaction amount: ");
    scanf("%d", &transaction);

    printf("Please enter the location (1 for Pakistan, 2 for UK, 3 for Other): ");
    scanf("%d", &location);

    printf("Please enter the number of today's transactions you have made: ");
    scanf("%d", &number_of_transactions);

    // Step 1: Transaction amount check
    if (transaction > 50000) {
        printf("High value transaction detected.\n");
        printf("Warning: Potential fraudulent activity detected.\n");
        return 0; // End program because transaction is not allowed
    }

    // Step 2: Number of transactions check
    if (number_of_transactions > 3) {
        printf("You have exceeded the maximum number of transactions allowed for today.\n");
        printf("Warning: Potential fraudulent activity detected.\n");
        return 0; // End program because transaction is not allowed
    }

    // Step 3: Location check
    if (location == 1) {
        printf("Your location is valid for this transaction.\n");
        printf("Transaction is valid and processed successfully.\n");
        return 0;
    }
    else if (location == 2) {
        printf("Your location is valid for this transaction.\n");
        printf("Transaction is valid and processed successfully.\n");
        return 0;
    }
    else if (location == 3) {
        printf("Your location is invalid for this transaction.\n");
        printf("Suspicious transaction detected.\n");
        return 0;
    }
    
    else {
        printf("Please enter a valid location code.\n");
    }

    return 0;
}
