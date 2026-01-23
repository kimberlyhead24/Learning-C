#include <stdio.h>

int main(){
    // Generate multiplication table for 5
    int number = 5;
    int multiplier = 1;

    printf("Multiplication Table for %d:\n", number);

    while (multiplier <= 10) {
        int result = number * multiplier;
        printf("%d x %d = %d\n", number, multiplier, result);
        multiplier++;
    }

    // Example of a sum calulation using while loop
    printf("\nSum of Numbers from 1 to 10:\n");
    int sum = 0;
    int counter = 1;

    while (counter <= 10) {
        sum += counter;
        counter++;
    }
    printf("Total sum: %d\n", sum);

    return 0;
}
