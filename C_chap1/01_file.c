#include<stdio.h>
#include<conio.h>

// Function to display a welcome message
void displayMessage() {
    printf("Hello! Geek\n");
}
int main() {
  
    // Using conio.h functions
    printf("Press any key to print message \n");
  
    // Wait for a key press
    getch(); 

    // Call the additional function after a key press
    displayMessage();

    return 0;
