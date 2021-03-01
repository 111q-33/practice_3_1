#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	float V = 0;
//	float §Õ§Ý = 3.1415926;
//	float r = 0;
//	scanf("%f", &r);
//	printf("%.3f", V = (4 / 3)*§Õ§Ý*r*r*r);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a, b, c;
//	float cir, area;
//	float p = 0;
//	scanf("%f %f %f", &a, &b, &c);
//	p = (float)(a + b + c) / 2;
//	area =sqrt(p*(p - a)*(p - c)*(p - b));
//	if (a + b>c && a + c>b && b + c>a)
//	{
//		printf("circumference=%.2f area=%.2f", cir = a + b + c, area /*= sprt(p*(p - a)*(p - c)*(p - b))*/);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float high = 0;
//	float wight = 0;
//	float n = 0;
//	scanf("%f %f", &wight, &high);
//	high = (pow((high / 100), 2));
//	n = wight / high;
//	printf("%.2f", n);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tmp = 0;
//	scanf("%d%d", &a, &b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("%d,%d", a, b);
//	return 0;
//}
#include<stdio.h>
int main()
{
	char ch = 0;
	char arr[20] = "AEIOUaeiou";
	while (~scanf(" %c", &ch))
	{

		int i = 0;
		while (arr[i])
		{
			if (ch == arr[i])
			{
				printf("Vowel\n");
				break;
			}
			i++;
		}
		if (arr[i]=='\0')
		{
			printf("Consonant\n");
		}
	}
	return 0;
}