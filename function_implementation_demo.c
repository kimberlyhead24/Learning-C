#include <stdio.h>
#include <string.h>

// Function prototype for temperature conversion
float celsius_to_fahrenheit(float celsius);

// Function prototype for string length calculation
int calculate_string_length(char* input_string);

// Function prototype for checking if a number is even
int is_even_number(int number);

int main() {
    // Demonstrating temperature conversion
    float temp_celsius = 25.0;
    float temp_fahrenheit = celsius_to_fahrenheit(temp_celsius);
    printf("%.1f°C is equal to %.1f°F\n", temp_celsius, temp_fahrenheit);

    // Demonstrating string length calculation
    char sample_text[] = "LabEx Programming";
    int text_length = calculate_string_length(sample_text);
    printf("Length of '%s' is %d characters\n", sample_text, text_length);

    // Demonstrating even number check
    int test_number = 14;
    if (is_even_number(test_number)) {
        printf("%d is an even number\n", test_number);
    } else {
        printf("%d is an odd number\n", test_number);
    }

    return 0;
}

    // Function implementation for temperature conversion
    float celsius_to_fahrenheit(float celsius) {
        return (celsius * 9/5) + 32;
    }

    // Function implementation for string length calculation
    int calculate_string_length(char* input_string) {
        return strlen(input_string);
    }

    // Function implementaton for even number check
    int is_even_number(int number) {
        return (number % 2 == 0);
    }
