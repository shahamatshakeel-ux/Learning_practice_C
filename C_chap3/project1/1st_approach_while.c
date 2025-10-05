#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // random seed set karna
    int num = (rand() % 100) + 1; // 1 se 100 tak random number banana
    int guess;
    int attempts = 1;
    printf("Guess a number between 1 and 100:\n");
    scanf("%d", &guess);
    while (guess != num) {
        if (guess < num) {
            printf("Guess higher:\n");
            scanf("%d", &guess);

        }
        else if (guess > num) {
            printf("Guess lower:\n");
            scanf("%d", &guess);
        }
        else {
            break;
        }
        attempts += 1;
    }
    printf("Congratulations! You guessed the number %d correctly in %d attempts.\n", num, attempts);

    return 0;
}
