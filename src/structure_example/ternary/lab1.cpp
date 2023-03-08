#include <cstdio>
#include <iostream>

int main(){
    int num;

    printf("Введіть число = %d");
    scanf("%d", &num);

    char fiveteen = (num % 15 == 0) ? printf("Число кратне 3 та 5.") : printf("Не кратне 3 та 5");
    char three = (num % 3 == 0) ? printf("Число кратне 3.") : printf("Не кратне 5");
    char five = (num / 5) ? printf("Число кратне 5.") : printf("Не кратне 3");

}