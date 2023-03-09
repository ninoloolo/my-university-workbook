#include <cstdio>

int main()
{
    char oper;
    float num1, num2;

    printf("Введіть операцію (+, -, *, /): ");
    scanf(" %c", &oper);

    printf("Введіть два числа: ");
    scanf("%f %f", &num1, &num2);

    switch (oper) {
        case '+':
            printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 == 0) {
                printf("Неможливо поділити на нуль!");
            }
            else {
                printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
            }
            break;

        default:
            printf("Невірний знак операції!");
            break;
    }

    return 0;
}
