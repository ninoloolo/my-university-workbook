#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;


struct SimpleStruct
{
    unsigned int first;
    unsigned int second;
};


 unsigned int read_unsigned_int(const char msg[]) {
     //виводить повідомлення та читає доти, доки не буде введено валідне значення
     const int _min = 1;
     unsigned int value;

     do {
         // Один раз, або поки не запрацює читаємо ввід
         cout << msg;
         cin >> value;

         if (cin.fail()) {
             clog << endl << "Неправильний ввід" << endl; 
             cin.clear();
             cin.ignore(65535, '\n');
         } else if (value < _min) {
             clog << endl << "Має бути більшим за " << _min;
         }

     } while (value < _min);

     return value;
 }


void Read(SimpleStruct& obj)
{
    obj.first = read_unsigned_int("Введіть позитивне число first = ");
    obj.second = read_unsigned_int("Введіть позитивне число second = ");
}

void Display(const SimpleStruct& obj) {
   printf("first = %d\n", obj.first);
   printf("second = %d\n", obj.second);
};


void Ipart(SimpleStruct& obj)
{
    double result = (double)obj.first / (double)obj.second;
    printf("%lf\n", result);
};

int main()
{
    SimpleStruct res;

    Read(res);
    Display(res);
    Ipart(res);

    return 0;
}
