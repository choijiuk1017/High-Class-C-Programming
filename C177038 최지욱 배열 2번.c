#include<stdio.h>

void scalar_mult(int a[][3], int scalar);

int main()
{
	int a[3][3] = {
		{1, 2, 3},
		{4, 5, 6}, 
		{7, 8, 9}
	};

	int scalar =3;

	scalar_mult(a, scalar);

	return 0;
	
}

void scalar_mult(int a[][3], int scalar)
{
	int total[3][3];

	for (int i = 0; i < scalar; i++)
	{
		for (int j = 0; j < scalar; j++)
		{
			total[i][j] = a[i][j] + a[i][j];
		}
	}
	for (int i = 0; i < scalar; i++)
	{
		for (int j = 0; j < scalar; j++)
		{
			printf("%d ", total[i][j]);
		}
		printf("\n");
	}
}
