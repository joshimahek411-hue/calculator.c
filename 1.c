#include <stdio.h>

void add(void) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Answer = %d\n", a + b);
}

void subtract(void) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Answer = %d\n", a - b);
}

void multiply(void) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Answer = %d\n", a * b);
}

void divide(void) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Cannot divide by zero.\n");
    } else {
        printf("Answer = %d\n", a / b);
    }
}

void remainder(void) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Cannot divide by zero.\n");
    } else {
        printf("Answer = %d\n", a % b);
    }
}

int main(void) {
    int choice;

    do {
        printf("\n1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Remainder\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: add(); break;
            case 2: subtract(); break;
            case 3: multiply(); break;
            case 4: divide(); break;
            case 5: remainder(); break;
            case 0: printf("Goodbye!\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}