 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//			sum += ret;
//		}
//
//		printf("%d\n", ret);
//		printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "20021213") ==0 )
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//			if (i ==2)
//				printf("密码三次输入错误，退出程序");
//		}
//		
//	}
//	
//	return 0;
//
////}
//#include<string.h>
//#include<time.h>
//#include<stdlib.h>
//void menu() 
//{
//	printf("************************\n");
//	printf("******** 1.play ********\n");
//	printf("******** 0.exit*********\n");
//	printf("************************\n");
//}
//void game()
//{
//	int ret = (rand()%100+1);
//	while (1)
//	{
//		int guess = 0;
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>\n");
//		scanf("%d", &input);
//			switch (input)
//			{
//			case 1:
//				printf("猜数字:>\n");
//				game();
//					break;
//			case 0:
//				printf("退出游戏\n");
//					break;
//			default:
//				printf("输入错误，请重新输入\n");
//				break;
//		}
//	} while (input);
//	return 0;
//
//}