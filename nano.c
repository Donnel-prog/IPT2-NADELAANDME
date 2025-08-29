#include <stdio.h>  // Preprocessor directive: Includes standard input-output header file

// Function declaration
void greet(); 

// Main function: entry point of the program
int main() {
    // Variable declaration
    int number = 5;

    // Function call
    greet();  // Calling the greet function

    // Print to console
    printf("The number is: %d\n", number);

    return 0;  // Return statement: indicates successful completion
}

// Function definition
void greet() {
    printf("Hello, World!\n");  // Print greeting message
}
