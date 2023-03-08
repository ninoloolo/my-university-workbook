#include <cstdio>

int main()
{
	int num;
	printf("Введіть число = ");
	scanf("%d", &num);

    char x = ((num > 0)) ? printf("Число додатне. \n") : (num < 0) ? printf("Число від`ємне. \n") : printf("Число є нулем. \n");
}