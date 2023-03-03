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


void Read(SimpleStruct& obj)
{
    obj.first = read_unsigned_int("Введіть кількість годин = ");
    obj.second = read_unsigned_int("Введіть кількість хвилин = ");
}

void Display(const SimpleStruct& obj) {
   printf("hours = %d\n", obj.first);
   printf("minutes = %d\n", obj.second);
};


void Clock(SimpleStruct& obj)
{
    double result = obj.first * 60 + obj.second;
    printf("Час в хвилинах = %f\n", result);
};


int main() {
    SimpleStruct res;

    Read(res);
    Display(res);
    Clock(res);
    return 0;
}