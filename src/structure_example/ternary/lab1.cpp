#include <cstdio>

int main()
{
	int num;
	printf("Введіть число = ");
	scanf("%d", &num);

    char x = ((num % 15 == 0)) ? printf("Число кратне 3 и 5. \n") : (num % 3 == 0) ? printf("Число кратне лише 3. \n") : printf("Число кратне лише 5. \n");
	return 0;
}
