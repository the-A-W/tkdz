 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		if (n % 2 == 0)
			printf("qiandaochenggong\n");
		else if (n > 1 && n % 2 == 1)
			printf("qiandaoshibai\n");
	}
	return 0;
}