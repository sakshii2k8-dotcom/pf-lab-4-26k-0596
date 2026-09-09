
#include <stdio.h>

int main()
{
    float num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(op)
    {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2f", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2f", result);
            break;

        case '/':
            if (num2 == 0)
            {
                printf("Error: Division by zero is not allowed");
            }
            else
            {
                result = num1 / num2;
                printf("Result: %.2f", result);
            }
            break;

        default:
            printf("Error: Invalid operator");
    }

    return 0;}

