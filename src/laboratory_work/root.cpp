#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;


struct SimpleStruct
{
    double first;
    double second;
    double x;
};

double read_double(const char msg[]) {
    double value;
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
    obj.first = read_double("Введіть перше число = ");

    do {
        obj.second = read_double("Введіть друге число = ");

        if (obj.second == 0.0) {
            printf("не може бути рівним нулю\n");
        }
    } while (obj.second == 0.0);
}

void Display(const SimpleStruct& obj) {
   printf("a = %.3lf\n", obj.first);
   printf("b = %.3lf\n", obj.second);
};


void Root(SimpleStruct& obj)
{
    printf("Введіть значення х = ");
    scanf("%lf", &obj.x);
    double root = obj.first * obj.x + obj.second;
    printf("\nВаш 'у' дорівнює %.3lf", root);
};


int main() {
    SimpleStruct res;

    Read(res);
    Display(res);
    Root(res);
    return 0;
}