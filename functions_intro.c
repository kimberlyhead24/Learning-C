#include <stdio.h>

// Function declaration (prototype)
void greet(char* name);
int add_numbers(int a, int b);

int main() {
    // Calling function
    greet("LabEx User");

    int result = add_numbers(5, 7);
    printf("5 + 7 = %d\n", result);

    return 0;
}

// Function definition for greeting
void greet(char*name) {
    printf("Hello, %s! Welcome to functions in C.\n", name);
}

// Function definition for addition
int add_numbers(int a, int b) {
    return a + b;
}
