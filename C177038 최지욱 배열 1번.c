#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10

int scan(int x);
void checknum(int arr[]);

int main()
{

	int arr[SIZE] = { 0 };

	printf("������ %d�� �Է��Ͻÿ�: ", 10);


	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = scan(i);
	}

	checknum(&arr);

	return 0;
}

int scan(int x)
{
	int a;

	for (int i = 0; i <= x; i++)
	{
		scanf("%d", &a);
		return a;
	}
}

void checknum(int arr[])
{
	int n = 0, z = 0, p = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > 0)
		{
			p++;
		}
		else if (arr[i] < 0)
		{
			n++;
		}
		else
		{
			z++;
		}
	}

	printf("����� %d��\n������ %d��\n0�� %d���Դϴ�.", p, n, z);
}