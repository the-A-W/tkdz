#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int mian()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//
//	}
//	printf("%d", ret);
//	return 0;
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int left = 0;
//	int sz = sizeof arr / sizeof arr[0];
//	int right = sz - 1;
//	while ((scanf("%d", &k) != EOF))
//	{
//		
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			if (k < arr[mid])
//			{
//				right = mid - 1;
//			}
//			else if (k > arr[mid])
//			{
//				left = mid + 1;
//			}
//			else
//			{
//				printf("找到了,下标是:%d\n", mid);
//				break;
//
//			}
//
//		}
//
//
//	}
//}main(
//#include <Windows.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		sleep(1000);
//		left++;
//		right--;
//	}
//	return 0;
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n = 0;
//	char arr[50] = { 0 };
//	int x = 0;
//	scanf("%d\n %s",&n, arr);
//	x = strlen(arr);
//	int i = 0;
//	for (i = 0; i <x; i++)
//	{
//		if (arr[i] + n > 'z')
//			arr[i] = arr[i] + n - 26;
//		else
//			arr[i] += n;
//
//	}
//	printf("%s", arr);
//	return 0;
//}
//void rule()
//{
//	int a, b, scoreA, scoreB;
//	
//	switch (a)
//	{
//	case 0:
//		if (b == 2||b== 3)
//			scoreA++;
//		else if (b == 1||b== 4)
//			scoreB++;
//		break;
//	case 1:
//		if (b == 1 || b == 3)
//			scoreA++;
//		else if (b == 2 || b == 4)
//			scoreB++;
//		break;
//	case 2:
//		if (b == 1 || b == 4)
//			scoreA++;
//		else if (b == 0 || b == 3)
//			scoreB++;
//		break;
//	case 3:
//		if (b == 2 || b == 4)
//			scoreA++;
//		else if (b == 0 || b == 1)
//			scoreB++;
//		break;
//	case 4:
//		if (b == 0 || b == 1)
//			scoreA++;
//		else if (b == 2 || b == 3);
//		scoreB++;
//		break;
//
//	}
//		
//}
//int main()
//{
//	int N, NA, NB;
//	scanf("%d %d %d", &N, &NA, &NB);
//
//
//	
//	return 0;
//}
//int main()
//{
//	char arr[] = "welcome to bit";
//	char arr1 = '1';
//	memset(arr, arr1, 5);
//	printf("%s", arr);
//}
//ret_type
//#include <string.h>
//int main()
//{
//    //char arr[20] = "hello";
//    //int ret = strlen(strcat(arr, "bit"));//这里介绍一下strlen函数
//    //printf("%d\n", ret);
//    int a = sizeof(int);
//    printf("%d", a);
//    return 0;
//}
//int Fac(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x * Fac(x-1) ;
//
//		
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == ||i/10==9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;

//}
//double Sum(int n)
//{
//	if (n % 2 == 1)
//		return 1.0 / n;
//	else
//		return -1.0 / n;
//}
//int main()
//{
//	int i = 0;
//	double ret = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		double sum = Sum(i);
//		ret += sum;
//	}
//	printf("%lf", ret);
//	return 0;
//}
// 
////double Sum(int n)
////{
////	if
////	 
////}
//int main()
//{
//	int arr[10] = { 21,13,2,3,34,31,32,11,20,10 };
//	int max = 0;
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}
//int print(int n)
//{
//	
//}
//
//int main()
//{
//	int a=print(213);
//		printf("%d", a);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "";
//	scanf("%s", arr);
//	int a = my_strlen(arr);
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	char ch[] = { 0 };
//	ch[0] = 'a';
//	ch[0] += 1;
//	printf("%c", ch[0]);
//	return 0;
//}