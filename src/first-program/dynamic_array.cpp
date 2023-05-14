#include <cstdio>
#include <cstdlib>

void dynamicArray(double* arr, int size, double (*func)(double*, int)){
    double average = func(arr, size);
    
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] - average;
    }
}


double averageSum(double* arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];}
    return sum / size;
}


int main() {
    double arr[] = { 1, 1.5, -2.3, 77, 3.333 };
    int size = 5;
    dynamicArray(arr, size, averageSum);
    printf("Результат");
    
    for (int i = 0; i < size; i++) {
        printf("\n %lf ", arr[i]);
    }
    
    printf("\n");
    return 0;
}