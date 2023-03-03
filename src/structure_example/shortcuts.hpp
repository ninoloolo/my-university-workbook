#include <iostream>

using namespace std;


unsigned int read_unsigned_int(const char msg[]) {
    // виводить повідомлення та читає доти, доки не буде введено валідне значення
    unsigned int value;
    bool read_fail = false;

    do {
        // Один раз, або поки не запрацює читаємо ввід
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
