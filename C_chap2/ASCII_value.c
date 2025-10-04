// ASCII ka matlab:

// ASCII = American Standard Code for Information Interchange

// Ye ek character encoding system hai.

// Isme har character (letter, digit, symbol) ko ek unique number (code) assign kiya gaya hai.

// Computer direct letters ko samajh nahi sakta, isliye wo inko numbers (binary form) me convert karta hai.
#include <stdio.h>
int main() {
    char ch;
    int ascii;
printf("Enter charecter to se a ASCII value:");
scanf("%c", &ch);
printf("Enter ASCII value to see a charecter:");
scanf("%d", &ascii);

printf("The ASCII value of charecter \'%c\' is: %d\n",ch,ch);
printf("The charster is at %d ASCII value is: %C\n",ascii,ascii);
    return 0;
}