#include <cstdio>
#include <cmath>


struct SimpleStruct
{
    double first;
    short int second = 0;
};

void Read(SimpleStruct &obj)
{
    printf("Введіть first = ");
    scanf("%lf", &obj.first);
    printf("Введіть second = ");
    scanf("%d", &obj.second);
}

void Display(SimpleStruct &obj)
{
    printf("first=%.4lf\n", obj.first);
    printf("second=%d\n", obj.second);
}

void Power(SimpleStruct &obj)
{
    double value = pow(obj.first, obj.second);
    printf("%lf\n", value);
};

int main()
{
    SimpleStruct res;

    // Display(res);
    Read(res);
    Display(res);
    Power(res);

    return 0;
}
