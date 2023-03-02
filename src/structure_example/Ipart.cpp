#include <cstdio>
#include <cmath>


struct SimpleStruct
{
    unsigned int first;
    unsigned int second = 0;
};

void Read(SimpleStruct &obj)
{
    printf("Введіть позитивне число first = ");
    scanf("%d", &obj.first);
    if (int(obj.first) > 0) {
        printf("Введіть позитивне число second = ");
        scanf("%d", &obj.second);
        if (int(obj.second) > 0){
        }
        else{
            printf("Ви ввели невірне значення. Перезапустіть програму, та введіть позитивне число!\n");
        }
    }
    else{
        printf("Ви ввели невірне значення. Перезапустіть програму, та введіть позитивне число!\n");
    }
}

void Display(SimpleStruct &obj)
{
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
