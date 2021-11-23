#include<stdio.h>
void pointer(int* A);

int main()
{
	int A[] = { 1, 2, 3, 4, 5 };

	pointer(&A);

	return 0;
}

void pointer(int* A)
{
	printf("A[] = {");
	for (int i = 0 ; i < 5; i++)
	{
		printf(" %d ", A[i]);
	}
	printf("}");
}