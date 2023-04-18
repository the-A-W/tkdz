// #define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//void ist(char A[10000],char B[100])
//{
//	int i = 1, j = 1, count = 0;
//	int a = strlen(A);
//	int b = strlen(B);
//	while (i <= a)
//	{
//		j = 1;
//		while (j <= b)
//		{
//			if (A[i] == B[j])
//			{
//				j++, i++;
//				if (A[i] == B[j] && j == b)
//					count++;
//			}
//			else
//				i++;
//			if (count == 2)
//			{
//				printf("%d", i + 1);
//				break;
//			}
//		}
//		if (count == 2)
//			break;
//		else
//			i++;
//	}
//}
//int main()
//{
//	char arr1[10000] = "apcapc";
//	char arr2[100] = "apc";
//	int i = 0, j = 0, count = 0;
//	int a = strlen(arr1)-1;
//	int b = strlen(arr2)-1;
//	while (i <= a)
//	{
//		j = 0;
//		while (j <= b)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				j++, i++;
//				if (arr1[i] == arr2[j] && j == b)
//					count++;
//			}
//			else
//				i++;
//			if (count == 2)
//			{
//				printf("%d", i + 1);
//				break;
//			}
//		}
//		if (count == 2)
//			break;
//		else
//			i++;
//	}
//	printf("%s %s", arr1, arr2);
//
//}