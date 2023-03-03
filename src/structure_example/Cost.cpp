#include <cstdio>
#include <iostream>
#include <cmath>
#include "shortcuts.hpp"

using namespace std;


struct SimpleStruct
{
    double first;
    unsigned int second;
};


void Read(SimpleStruct& obj)
{
    printf("Введіть вартість товару = ");
    scanf("%lf", &obj.first);
    obj.second = read_unsigned_int("\nВведіть позитивне число second = ");
}

void Display(const SimpleStruct& obj) {
   printf("first = %.3lf\n", obj.first);
   printf("second = %d\n", obj.second);
};


void Cost(SimpleStruct& obj)
{
    double result = obj.first * obj.second;
    printf("%.3lf\n", result);
};


int main() {
    SimpleStruct res;

    Read(res);
    Display(res);
    Cost(res);
    return 0;
}