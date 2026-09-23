#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(void) {
    char number[20];
    char choice;
    bool valid;
    int decimal_count;

    do {
        valid = true;
        decimal_count = 0;

        printf("\nEnter a number: ");

        if (scanf("%19s", number) != 1) {
            return 1;
        }

        // Input validation
        for (int i = 0; number[i] != '\0'; i++) {
            if (number[i] == '.') {
                decimal_count++;
                if (decimal_count > 1) {
                    valid = false;
                    break;
                }
            } else if (!isdigit((unsigned char)number[i])) {
                valid = false;
                break;
            }
        }

        if (!valid) {
            printf("Invalid input! Please enter a valid number.\n");
        } else if (strchr(number, '.') != NULL) {
            printf("The entered number is a floating point number.\n");
        } else {
            printf("The entered number is an integer number.\n");
        }

        printf("\nDo you want to check another number? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you for using the program!\n");
    return 0;
}
