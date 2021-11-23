#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char word[100]; //입력받을 문자열을 배열로 저장
	int count = 0; //a의 수를 세기 위한 변수
	printf("한 줄의 문자를 입력하시오.(엔터키를 누르는 순간까지)\n"); 
	scanf("%s", &word);

	for (int i = 0; i < 100; i++) //word[0]부터 word[99]까지의 문자열의 크기만큼 반복
	{
		if (word[i] == 'a') //i값에 해당하는 배열의 문자가 a일 경우
		{
			count += 1; //수를 셈
		}
	}

	printf("a의 개수는 %d개 입니다.", count);

	return 0;
}