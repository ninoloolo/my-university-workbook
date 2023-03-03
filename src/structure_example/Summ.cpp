#include <cstdio>
#include <iostream>
#include <cmath>
#include "shortcuts.hpp"

using namespace std;


struct SimpleStruct
{
    unsigned int first;
    unsigned int second;
};

unsigned int input_coin_value() {
    unsigned int num;
    do {
        num = read_unsigned_int("Введіть номінал: ");
        if (!(num == 1 || num == 2 || num == 5 || num == 10 || num == 50 || num == 100 || num == 500 || num == 1000 || num == 5000)) {
            clog << "Неіснуючий номінал\n";
        }
    } while (!(num == 1 || num == 2 || num == 5 || num == 10 || num == 50 || num == 100 || num == 500 || num == 1000 || num == 5000));
    return num;
}


void Read(SimpleStruct& obj)
{
    obj.first = input_coin_value();
    obj.second = read_unsigned_int("Введіть позитивне число second = ");
}

void Display(const SimpleStruct& obj) {
   printf("first = %d\n", obj.first);
   printf("second = %d\n", obj.second);
};


void Ipart(SimpleStruct& obj)
{
    double result = obj.first * obj.second;
    printf("%f\n", result);
};


int main() {
    SimpleStruct res;

    Read(res);
    Display(res);
    Ipart(res);
    return 0;
}