#include<stdio.h>

int main()
{

	int x, y, z, M, m, a, b, d, e, f, g;
	int c = 0;
	int sum = 0;
	int f0 = 0;
	int f1 = 1;

		
	
	printf("ù��° ����\n");
	printf("%d���� ������ �Է��Ͻÿ�: ", 3);
	scanf("%d %d %d", &x, &y, &z);
	if (x >= y)
	{
		M = x;
		m = y;
	}
	else
	{
		M = y;
		m = x;
	}
	if (z > M)
	{
		M = z;
	}
	if (z < m)
	{
		m = z;
	}
	printf("���� ���� ������ %d�Դϴ�. \n\n", m);



	printf("�ι�° ����\n");
	printf("��ǥ(x, y): ");
	scanf("%d %d", &a, &b);
	if (a > 0 && b > 0)
	{
		printf(" %d��и�\n\n", 1);
	}
	else if (a < 0 && b > 0)
	{
		printf(" %d��и�\n\n", 2);
	}
	else if (a < 0 && b < 0)
	{
		printf(" %d��и�\n\n", 3);
	}
	if (a > 0 && b < 0)
	{
		printf(" %d��и�\n\n", 4);
	}



	printf("����°����\n");
	for (int i = 0; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			c += i;
		}

	}
	printf("%d���� %d ������ ��� %d�� ����� ���� %d�Դϴ�. \n\n", 1, 100, 3, c);
	


	printf("�׹�°����\n");
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &d);
	printf("���: ");
	for (int i = 1; i <= d; i++)
	{
		if (d % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n\n");



	printf("�ټ���°����\n");
	for (int i = 0; i < 8; i++)
	{
		for(int j = i; j < 8; j++)
		{
			printf(" ");
		}
		for(int k = i; k < i+i; k++)
		{
			printf("*");
		}
		printf("\n\n");
	}
	

	printf("������°����\n");
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &e);
	for (int i = 1; i <= e; i++)
	{
		for (int j = 1; j < i+1; j++)
		{
			printf("%d", j);
		}
		printf("\n\n");
	}

	
	printf("�ϰ���°����\n");
	for (int i = 2; i <= 100; i++)
	{
		int j;

		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
		}
		
	}
	printf("\n\n");

	printf("������°����\n");
	for (int i = 0; i < 10000; i++)
	{
		sum = sum + i;
		if (sum > 10000)
		{
			sum = sum - i;
			i--;
			break;
		}
	}
	printf("%d\n\n", sum);


	printf("��ȩ��°����\n");
	printf("���° �ױ��� ���ұ��? ");
	scanf("%d", &f);
	for (int i = 0; i <= f; i++)
	{
		if (i == 0)
		{
			g = f0;
		}
		else if (i == 1)
		{
			g = f1;
		}
		else
		{
			g = f0 + f1;
			f0 = f1;
			f1 = g;
		}
		
		printf("%d ", g);
	}

	
}

