#include <cstdio>
#include <cmath>

struct SimpleStruct
{
    unsigned int first;
    unsigned int second;
};

void Read(SimpleStruct &obj)
{
    while (true) {
        printf("Введіть позитивне число first = ");
        if (scanf("%d", &obj.first) != 1 && obj.first > 0) {
            printf("Ви ввели невірне значення. Введіть позитивне число!\n");
        } else { break; }
    }

    while (true) {
        printf("Введіть позитивне число second = ");
        if (scanf("%d", &obj.second) != 1 && obj.second > 0) {
            printf("Ви ввели невірне значення. Введіть позитивне число!\n");
        } else { break; }
    }
}

void Display(SimpleStruct &obj) {
   printf("first= %d\n", obj.first);
   printf("second= %d\n", obj.second);
};


void Ipart(SimpleStruct &obj)
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
