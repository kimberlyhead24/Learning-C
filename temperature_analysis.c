#include <stdio.h>

int main() {
    // Declare an integer array with 6 temperature readings
    int temperatures[6] = {72, 68, 75, 80, 65, 78};
    // DO NOT MODIFY ABOVE THIS LINE
    // TODO: Calculate average temperature
    int total = 0;
    for (int i = 0; i < 6; i++) {
        total += temperatures[i];
    }
    float average = (float)total / 6;

    // TODO: Find highest temperature
    // TODO: Find lowest temperature
    int maximum = temperatures[0];
    int minimum = temperatures[0];
    for (int i = 1; i < 6; i++) {
        if (temperatures[i] < minimum) {
             minimum = temperatures[i];
        }
        if (temperatures[i] > maximum) {
            maximum = temperatures[i];
        }
    }

    // TODO: Print results
    printf("Average Temperature: %.1f degrees\n", average);
    printf("Highest Temperature: %d degrees\n", maximum);
    printf("Lowest Temperature: %d degrees\n", minimum);
    
    return 0;
}
