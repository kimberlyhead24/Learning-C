#include <stdio.h>
#include <math.h>


// We are only going to include true perfect squares not decimals
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

    // Adding feature to find the next perfect square

    int nextRoot = root + 1;
    int nextPerfectSquare = nextRoot * nextRoot;

    printf("%d is the next perfect square after %d.\n", nextPerfectSquare, number);

    return 0;
}
