#include <stdio.h>

int main() {
    char name[51];  // 50 characters + null terminator
    int age, grade_level;
    float academic_score;
    
    // String input
    printf("Enter student name: "),
    scanf(" %[^\n]", name);
    
    // Integer input
    printf("Enter student age: "),
    scanf("%d", &age);
    
    // Integer input
    printf("Enter grade level: "),
    scanf("%d", &grade_level);
    
    // Float input
    printf("Enter academic score: "),
    scanf("%f", &academic_score);

    // Printing input values
    printf("--- Student's Information ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d years\n", age);
    printf("Grade Level: %d\n", grade_level);
    printf("Academic Score: %.2f\n", academic_score);

    return 0;
}
