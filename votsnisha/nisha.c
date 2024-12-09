#include<stdio.h>
    
int main()

{   

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
    }

    return 0;
}