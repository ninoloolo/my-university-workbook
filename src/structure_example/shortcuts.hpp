#include <iostream>

using namespace std;


unsigned int read_unsigned_int(const char msg[]) {
    // виводить повідомлення та читає доти, доки не буде введено валідне значення
    const int _min = 0;
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
