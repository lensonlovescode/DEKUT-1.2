#include <stdio.h>

int main(void)
{
    int result, num1, num2;
    char op;


    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter operator: ");
    scanf("%c", &op);

    switch (op)
    {
    case '+':
    {
        result = num1 + num2;
        printf("%d + %d = %d", num1, num2, result);
        break;
    }
    case '-':
    {
        result = num1 - num2;
        printf("%d - %d = %d", num1, num2, result);
    break;
    }
    case '*':
    {
        result = num1 * num2;
        printf("%d * %d = %d", num1, num2, result);
    break;
    }
    case '/':
    {
        result = num1 / num2;
        printf("%d / %d = %d", num1, num2, result);
    break;
    }
    case '%':
    {
        result = num1 % num2;
        printf("%d %% %d = %d", num1, num2, result);
    break;
    }
    default:{
        printf("Wrong opeator");
    break;
    }
    }
    return (0);
}
