#include<stdio.h>



int main()
{
    char operator;

    int num1,num2;


printf("Enter an operator to calculate (+,-,*,/)\tor\tif you want to exit press :- x\t \t:-  ");
scanf("%c", &operator);


printf("\nEnter two number: ");
scanf("%d %d", &num1,&num2);

switch (operator)
   {  
            case '+':
                printf("%d + %d = %d\n", num1, num2,(num1 + num2));
                break;
            case '-':
                printf("%d - %d = %d\n", num1, num2, (num1 - num2));
                break;
            case '*':
                printf("%d * %d = %d\n", num1, num2, (num1 * num2));
                break;
            case '/':
                if (num2 != 0)
                 {
                    printf("%d / %d = %d\n", num1, num2, (num1 / num2));
                 }
                 else 
                {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid operator. Please try again.\n");
        }
return 0;
}