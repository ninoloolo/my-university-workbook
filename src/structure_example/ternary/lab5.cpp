#include <cstdio>

int main() {
    int result;
    printf("Введіть результат гри (0 , 1 , 3): ");
    scanf("%d", &result);

    switch (result) {
        case 0:
            printf("Команда отримала поразку.");
            break;
        case 1:
            printf("Команда зіграла в нічию.");
            break;
        case 3:
            printf("Команда перемогла.");
            break;
        default:
            printf("Невірно введений результат гри.");
            break;
    }

    return 0;
}
