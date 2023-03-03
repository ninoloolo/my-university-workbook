#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;


struct SimpleStruct
{
    int first;
    int second;
    int num;
};

int read_int(const char msg[]) {
    int value;
    bool read_fail = false;

    do {
        cout << msg;
        cin >> value;
        read_fail = cin.fail();

        if (read_fail) {
            clog << endl << "Неправильний ввід" << endl; 
            cin.clear();
            cin.ignore(65535, '\n');
        };
    } while (read_fail);

    return value;
}

void Read(SimpleStruct& obj)
{
    obj.first = read_int("Введіть ліву границю = ");
    obj.second = read_int("Введіть праву границю = ");
}

void Display(const SimpleStruct& obj) {
   printf("first = %d\n", obj.first);
   printf("second = %d\n", obj.second);
};


void Rangecheck(SimpleStruct& obj)
{
    obj.num = read_int("Введіть ціле число = ");
    if(obj.num >= obj.first && obj.num < obj.second){
        printf("\nЧисло входить в проміжок\n");
    } else if (obj.num <= obj.first or obj.num >= obj.second){
        printf("Число не входить в проміжок");
    };
};


int main() {
    SimpleStruct res;

    Read(res);
    Display(res);
    Rangecheck(res);
    return 0;
}