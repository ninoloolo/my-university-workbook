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

        if (read_fail or value <= 0) {
            clog << endl << "Неправильний ввід" << endl; 
            cin.clear();
            cin.ignore(65535, '\n');
        };
    } while (read_fail);

    return value;


void Read(SimpleStruct& obj){

}


