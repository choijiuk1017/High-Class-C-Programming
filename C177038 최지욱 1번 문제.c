#include<stdio.h>
#include<math.h> // 제곱을 이용하기 위해 math.h에서 지원하는 pow 사용
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int num = 0;

	int sum = 0;

	//2진수를 입력받을 변수 num과 10진수로 변환하기 위한 sum 선언 및 초기화

	int n = 0; //지수값 선언 및 초기화

	printf("%d진수를 입력하시오. (단, 정수로 입력): \n", 2);
	scanf("%d", &num);

	while (1)
	{
		sum += (num % 10) * pow(2, n); // 입력 받은 2진수의 각자리 숫자의 값에 2진수의 제곱근을 곱한 후 서로 더함

		num = num / 10; // i가 증가하여 그 다음 자리수로 넘어가도록 함

		n++; //지수 증가

		if (num == 0) // 다음 자리수로 넘어갈 수 없다면
		{
			break; // 반복문 탈출
		}
	}

	printf("%d진수로 변환 결과 %d 입니다.", 10, sum);

	return 0;

}