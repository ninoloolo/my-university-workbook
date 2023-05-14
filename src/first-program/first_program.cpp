#include <cstdio>
#include <cstdlib> 

void pop_back(int*& arr, int& size){
    if (size > 0){
        size--;
        int* new_arr = new int[size];
        for (int i = 0; i < size; i++){

            new_arr[i] = arr[i];
        }
        delete[] arr;
        arr = new_arr;
    }
}

int main(){
    int size = 5;
    int* arr = new int[size] {9, 7, 3, 0, -4};
    pop_back(arr, size);

    for (int i = 0; i < size; ++i){
        printf(" %d ", arr[i]);
    }

    delete[] arr;
    return 0;
}