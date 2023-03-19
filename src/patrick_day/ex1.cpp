#include <cstdio>

void FillArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Введіть число %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void FillArray(double* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Введіть число %d: ", i + 1);
        scanf("%lf", &arr[i]);
    }
}

void FillArray(char* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Введіть число %d: ", i + 1);
        scanf("%c", &arr[i]);
        while((getchar()) != '\n');
    }
}

void PrintAddress(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Елемент %d знаходиться в: %p\n", i + 1, &arr[i]);
    }
}

void PrintAddress(double* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Елемент %d знаходиться в: %p\n", i + 1, &arr[i]);
    }
}

void PrintAddress(char* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Елемент %d знаходиться в: %p\n", i + 1, &arr[i]);;
    }
}

void PrintArray(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void PrintArray(const double* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%lf ", arr[i]);
    }
    printf("\n");
}

void PrintArray(const char* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

int main() {
    int intArr[3];
    double doubleArr[3];
    char charArr[3];

    FillArray(intArr, 3);
    PrintAddress(intArr, 3);
    PrintArray(intArr, 3);

    FillArray(doubleArr, 3);
    PrintAddress(doubleArr, 3);
    PrintArray(doubleArr, 3);

    FillArray(charArr, 3);
    PrintAddress(charArr, 3);
    PrintArray(charArr, 3);

    return 0;
}
