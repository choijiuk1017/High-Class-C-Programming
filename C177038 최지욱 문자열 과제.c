#include<stdio.h>
#include<string.h>

#define _CRT_SECURE_NO_WARNINGS
#define MAX_LENGTH 100

void printreverse(char* a);

int main()
{
	char arr[MAX_LENGTH];

	char* p;

	p = arr;

	printf("���ڿ��� �Է��Ͻÿ�.(��, EnterŰ�� �Էµ� ������): ");
	gets_s(arr,MAX_LENGTH);

	printreverse(p);
}

void printreverse(char* a)
{
	for (int i = strlen(a) - 1; i >-1; i--)
	{
		printf("%c", a[i]);
	}
	printf("\n");
}