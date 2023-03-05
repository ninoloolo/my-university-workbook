#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;


struct SimpleStruct
{
    double first;
    double second;
};

double read_double(const char msg[]) {
    double value;
    bool read_fail = false;

    do {
        cout << msg;
        cin >> value;
        read_fail = cin.fail();

        if (read_fail or value < 0) {
            clog << endl << "Неправильний ввід" << endl; 
            cin.clear();
            cin.ignore(65535, '\n');
        };
    } while (read_fail);

    return value;

};
void Read(SimpleStruct& obj)
{
    obj.first = read_double("Введіть перший катет трикутника = ");
    obj.second = read_double("Введіть другий катет трикутника = ");
}

void Display(const SimpleStruct& obj) {
   printf("катет а = %.2lf\n", obj.first);
   printf("катет b = %.2lf\n", obj.second);
};


void Hipotenuse(SimpleStruct& obj)
{
    double result = sqrt(obj.first * obj.first + obj.second + obj.second);
    printf("Гіпотенуза = %.3lf\n", result);
};

int main()
{
    SimpleStruct res;

    Read(res);
    Display(res);
    Hipotenuse(res);

    return 0;
}

