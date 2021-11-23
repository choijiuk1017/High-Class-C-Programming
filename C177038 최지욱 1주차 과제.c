#include<stdio.h>

int main()
{

	int x, y, z, M, m, a, b, d, e, f, g;
	int c = 0;
	int sum = 0;
	int f0 = 0;
	int f1 = 1;

		
	
	printf("첫번째 문제\n");
	printf("%d개의 정수를 입력하시오: ", 3);
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
	printf("제일 작은 정수는 %d입니다. \n\n", m);



	printf("두번째 문제\n");
	printf("좌표(x, y): ");
	scanf("%d %d", &a, &b);
	if (a > 0 && b > 0)
	{
		printf(" %d사분면\n\n", 1);
	}
	else if (a < 0 && b > 0)
	{
		printf(" %d사분면\n\n", 2);
	}
	else if (a < 0 && b < 0)
	{
		printf(" %d사분면\n\n", 3);
	}
	if (a > 0 && b < 0)
	{
		printf(" %d사분면\n\n", 4);
	}



	printf("세번째문제\n");
	for (int i = 0; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			c += i;
		}

	}
	printf("%d부터 %d 사이의 모든 %d의 배수의 합은 %d입니다. \n\n", 1, 100, 3, c);
	


	printf("네번째문제\n");
	printf("정수를 입력하시오: ");
	scanf("%d", &d);
	printf("약수: ");
	for (int i = 1; i <= d; i++)
	{
		if (d % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n\n");



	printf("다섯번째문제\n");
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
	

	printf("여섯번째문제\n");
	printf("정수를 입력하시오: ");
	scanf("%d", &e);
	for (int i = 1; i <= e; i++)
	{
		for (int j = 1; j < i+1; j++)
		{
			printf("%d", j);
		}
		printf("\n\n");
	}

	
	printf("일곱번째문제\n");
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

	printf("여덟번째문제\n");
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


	printf("아홉번째문제\n");
	printf("몇번째 항까지 구할까요? ");
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

