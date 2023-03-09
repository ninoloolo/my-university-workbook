#include <cstdio>

int main() {
    int num1, num2, num3, max;

    printf("Введіть три числа: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    printf("Найбільшим числом є %d", max);
    return 0;
}