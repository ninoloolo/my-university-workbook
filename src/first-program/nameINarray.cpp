#include <cstdio>
#include <cstdlib>
#include <cstring>

char* copy_arr(const char* arr, int size) {

    char* name_arr = new char[size];
    int element = size - 1;
    
    for (int i = 0; i < size; i++) {
        name_arr[element] = arr[i];
        element--;
    }
    return name_arr;
}


int main() {
    char arr[20] = "";
    printf("Put your name = ");
    scanf("%s", arr);
    fflush(stdin);
    
    int size = strlen(arr);
    char* name_arr = copy_arr(arr, size);
    
    for (int i = 0; i < size; i++) {
        printf("%c", name_arr[i]);
    }
    printf("\n");

    
    delete[] name_arr;
    return 0;
}