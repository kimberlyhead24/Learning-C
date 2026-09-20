#include <stdio.h>

int main() {
    float radius;
    const float PI = 3.14159;
    float area;
    float circumference;

    printf("Enter the radius of the circle: ");

    scanf("%f", &radius);

    if (radius <= 0) {
        printf("Error: Radius must be a positive number\n");
        return 1;
    }

    area = PI * radius * radius;

    circumference = 2 * PI * radius;

    printf("\nResults for a circle with radius %.2f units:\n", radius);
   printf("Area: %.2f square units\n", area);
   printf("Circumference: %.2f units\n", circumference);

    return 0;
}



