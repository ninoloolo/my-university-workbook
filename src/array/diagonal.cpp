#include <cstdio> 
#include <cstdlib> 
#include <time.h> 

int main(){  
    const int size = 10; 
    
    int **parr = new int*[size]; 
    for(int i = 0; i < size; ++i) { 
        parr[i] = new int[size]; 
    } 
    
    srand(time(NULL)); 
    for(int x = 0; x < size; x++) { 
        for(int y = 0; y < size; y++){ 
            parr[x][y] = rand()%10000 + 1; 
            printf("%d | ", parr[x][y]); 
        } 
        printf("\n"); 
    }  
    printf("========================================================================\n");

    int* parr2 = new int[size];
        for (int i = 0; i < size; i++) {
        parr2[i] = parr[i][i];
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", parr2[i]);
    }
    printf("\n");

    for (int i = 0; i < size; i++) {
        delete[] parr[i];
    }
    delete[] parr;
    delete[] parr2;

    return 0;
}