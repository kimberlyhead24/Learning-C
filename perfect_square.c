#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// We are only going to include true perfect squares not d
int main() {
    int number;

    printf("Enter a number to check if it is a perfect square: ");
    scanf("%d", &number);

    // Error checking negative numbers
    if (number < 0) {
        printf("%d is negative, and negative numbers cannot be perfect squares.\n", number);
        return 0;
    }

    int root = sqrt(number);

    if (root * root == number) {
        printf("%d is a perfect square. It is %d squared.\n", number, root);
    } else {
        printf("%d is not a perfect square.\n", number);
    }

    return 0;
}
