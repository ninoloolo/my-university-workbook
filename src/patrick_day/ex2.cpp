#include <cstdio>

void swap(char* c1, char* c2, char* c3){
    char temp = *c1;
    *c1 = *c2;
    *c2 = *c3;
    *c3 = temp;
}


int main(){
    char n1 = '1';
    char n2 = '2';
    char n3 = '3';
    swap(&n1, &n2, &n3);
    printf("%c %c %c\n", n1, n2, n3);
}
