#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int aa[2][5] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
//char* left_down(char *str, int k)
//{
//	int n = strlen(str);
//	while (k)
//	{
//		char start = *str;
//		int i = 0;
//		for (i = 0; i < n - 1; i++)
//		{
//			*(str + i) = *(str + i + 1);
//		}
//		*(str + i) = start;
//		k--;
//	}
//	return str;
//}
//void reverse(char* str1, char* str2)
//{
//	while (str1 < str2)
//	{
//		char tmp = *str1;
//		*str1 = *str2;
//		*str2 = tmp;
//		str1++;
//		str2--;
//	}
//}
//char* left_down(char* str1, char* str2,int l)
//{
//	reverse(str1, str2 - 1);
//	reverse(str2, str1 + l - 1);
//	reverse(str1, str1 + l - 1);
//	return str1;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int l = strlen(arr);
//	int n = 0;
//	scanf("%d",&n);
//	left_down(arr, arr + n,l);
//	printf("%s", arr);
//	return 0;
//}
//int is_left(char* s1, char* s2)
//{
//	if (strlen(s1) != strlen(s2))
//		return 0;
//	strncat(s1,s1, strlen(s1));
//	if (strstr(s1, s2))
//		return 1;
//	return 0;
//}
//int main()
//{
//	char s1[20] = "abcdef";
//	char s2[] = "cdefab";
//	int n=is_left(s1, s2);
//	if (n)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}
int find(int arr[3][3], int n, int row, int col)
{
	int x = 0;
	int y = col - 1;
	while (x < row && y >=0)
	{
		if (arr[x][y] > n)
			y--;
		else if (arr[x][y] < n)
			x++;
		else
			return 1;
	}
	return 0;
}
int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n = 0;
	scanf("%d", &n);
	int ret=find(arr, n, 3, 3);
	if (ret)
		printf("´æÔÚ\n");
	else
		printf("²»´æÔÚ\n");
	return 0;
}
