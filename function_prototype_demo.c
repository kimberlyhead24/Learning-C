#include <stdio.h>

// Function Prototype
// Syntax return_type function_name(parameter_type);
int calculate_rectangle_area(int length, int width);
void print_greeting(char* name);

int main() {
    // Using functions after their prototypes
    int length = 5;
    int width = 3;
    int area = calculate_rectangle_area(length, width);

    printf("Rectangle area: %d square units\n", area);

    print_greeting("Labex Student");

    return 0;
}
// Function definition for calculating rectangle area
int calculate_rectangle_area(int length, int width) {
    return length * width;
}

// Function definition for printing greeting
void print_greeting(char* name) {
    printf("Hello, %s! Welcome to function prototypes.\n", name);
}
