#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;


struct SimpleStruct
{
    unsigned int first;
    unsigned int second;
};


void read_unsigned_int(unsigned int val, const char msg[]) {
    // виводить повідомлення та читає доти, доки не буде введено валідне значення
    const int _min = 0;

    do {
        // Один раз, або поки не запрацює читаємо ввід
        cout << msg;
        cin >> val;

        if (cin.fail()) {
            clog << endl << "Неправильний ввід" << endl; 
            cin.clear();
            cin.ignore(65535, '\n');
        } else if (val < _min) {
            clog << endl << "Має бути більшим за " << _min;
        }

    } while (val < _min);
}


void Read(SimpleStruct& obj)
{
    read_unsigned_int(obj.first, "Введіть позитивне число first = ");
    read_unsigned_int(obj.first, "Введіть позитивне число second = ");
}

void Display(const SimpleStruct& obj) {
   printf("first= %d\n", obj.first);
   printf("second= %d\n", obj.second);
};


void Ipart(SimpleStruct& obj)
{
    double result = obj.first / obj.second;
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
