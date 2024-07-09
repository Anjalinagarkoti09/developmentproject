#include<stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {
    char operator;
    int num1, num2;

    do {
        printf("Enter an operator to calculate (+, -, *, /) or press 'x' to exit: ");
        scanf(" %c", &operator); 

        if (operator == 'x') {
            printf("Exiting the program.\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        
        while (getchar() != '\n');

        switch (operator) {
            case '+':
                printf("%d + %d = %d\n", num1, num2, add(num1, num2));
                break;
            case '-':
                printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
                break;
            case '*':
                printf("%d * %d = %d\n", num1, num2, multiply(num1, num2));
                break;
            case '/':
                if (num2 != 0) {
                    printf("%d / %d = %d\n", num1, num2, divide(num1, num2));
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid operator. Please try again.\n");
        }
    } while (operator != 'x');

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}