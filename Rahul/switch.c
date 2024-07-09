  switch (operator)
   {
            case '+':
                printf("%d + %d = %d\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("%d - %d = %d\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("%d * %d = %d\n", num1, num2, num1 * num2);
                break;
            case '/':
                if (num2 != 0)
                 {
                    printf("%d / %d = %d\n", num1, num2, num1 / num2);
                 }
                 else 
                {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid operator. Please try again.\n");
        }