#include <stdio.h>

int is_even_number(int component_num);

int is_even_number(int component_num) {
if (component_num % 2 == 0) {
    return 1;
} else {
    return 0;
}
}

int main() {
    // DO NOT MODIFY THE MAIN FUNCTION
    printf("4 is even: %d\n", is_even_number(4));
    printf("7 is even: %d\n", is_even_number(7));
    printf("0 is even: %d\n", is_even_number(0));
    return 0;
}
