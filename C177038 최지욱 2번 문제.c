#include<stdio.h>
#include<stdlib.h> //rand()를 사용하기 위함
#include<time.h> //time()을 사용하기 위함
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	srand((unsigned) time(NULL)); //랜덤 값이 계속 바뀌도록 설정

	int you;
	char q = ' ';
	
	
	printf("가위(%d), 바위(%d), 보(%d) 중 하나를 입력하시오.\n", 1, 2, 3);
	printf("Q를 입력하시면 게임은 종료됩니다.\n");


	while(1)
	{
		int cum = rand() % 3 + 1; //컴퓨터가 랜덤하게 가위, 바위, 보 중 하나를 내도록 설정
	
		printf("가위, 바위,.....\n");

		scanf("%d", &you); //정수를 통해 사용자 입력 받음
		scanf("%c", &q); 
		
		//정수를 입력받은 다음, Enter키를 입력할 경우 %c에 Enter를 입력받게 되는것을 이용하였습니다.

		if (you == 1 && q != 'Q') //사용자가 가위를 냈고
		{
			if (cum == 3 )//컴퓨터가 보를 낸 경우
			{
				printf("당신: 가위, 컴퓨터: 보, 이겼습니다.\n");
			}
			else if (cum == 1)//컴퓨터가 가위를 낸 경우
			{
				printf("당신: 가위, 컴퓨터: 가위, 비겼습니다.\n");
			}
			else//컴퓨터가 바위를 낸 경우
			{
				printf("당신: 가위, 컴퓨터: 바위, 졌습니다.\n");
			}
		}

		else if (you == 2 && q != 'Q') //사용자가 바위를 냈고
		{
			if (cum == 1)//컴퓨터가 가위를 낸 경우
			{
				printf("당신: 바위, 컴퓨터: 가위, 이겼습니다.\n");
			}
			else if (cum == 2)//컴퓨터가 바위를 낸 경우
			{
				printf("당신: 바위, 컴퓨터: 바위, 비겼습니다.\n");
			}
			else//컴퓨터가 보를 낸 경우
			{
				printf("당신: 바위, 컴퓨터: 보, 졌습니다.\n");
			}
		}

		else if (you == 3 && q != 'Q') //사용자가 보를 냈고
		{
			if (cum == 2)//컴퓨터가 바위를 낸 경우
			{
				printf("당신: 보, 컴퓨터: 바위, 이겼습니다.\n");
			}
			else if (cum == 3)//컴퓨터가 보를 낸 경우
			{
				printf("당신: 보, 컴퓨터: 보, 비겼습니다.\n");
			}
			else//컴퓨터가 가위를 낸 경우
			{
				printf("당신: 보, 컴퓨터: 가위, 졌습니다.\n");
			}
		}

		if (q == 'Q') //Q입력시
		{
			break; //종료
		}
		
	}

	printf("가위, 바위, 보를 종료합니다.\n");

	return 0;
}

