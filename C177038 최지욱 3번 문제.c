#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char word[100]; //�Է¹��� ���ڿ��� �迭�� ����
	int count = 0; //a�� ���� ���� ���� ����
	printf("�� ���� ���ڸ� �Է��Ͻÿ�.(����Ű�� ������ ��������)\n"); 
	scanf("%s", &word);

	for (int i = 0; i < 100; i++) //word[0]���� word[99]������ ���ڿ��� ũ�⸸ŭ �ݺ�
	{
		if (word[i] == 'a') //i���� �ش��ϴ� �迭�� ���ڰ� a�� ���
		{
			count += 1; //���� ��
		}
	}

	printf("a�� ������ %d�� �Դϴ�.", count);

	return 0;
}