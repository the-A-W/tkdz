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
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "20021213") ==0 )
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//			if (i ==2)
//				printf("����������������˳�����");
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
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
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
//		printf("��ѡ��>\n");
//		scanf("%d", &input);
//			switch (input)
//			{
//			case 1:
//				printf("������:>\n");
//				game();
//					break;
//			case 0:
//				printf("�˳���Ϸ\n");
//					break;
//			default:
//				printf("�����������������\n");
//				break;
//		}
//	} while (input);
//	return 0;
//
//}