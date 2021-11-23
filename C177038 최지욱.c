#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void problem1(void);
void problem3(void);
void problem4(void);
void problem5(void);
void problem6(void);
int calculateCarParkingCharge(int Sdate, int Stime, int Sminute, int Edate, int Etime, int Eminute);
int isLeapYear(int year);
void displayTree(int pattern, int numberofLines);
int save(int amount);
const int saveLocalOnly(int amount);


int main()
{
	problem1();
	problem3();
	problem4();
	problem5();
	problem6();
}

void problem1()
{
	int Sdate =0, Stime=0, Sminute=0;
	int Edate=0, Etime=0, Eminute=0;
	int charge = 0;

	printf("���� ���� �ð��� �Է��Ͻÿ�.(��, ��, ��): ");
	scanf("%d, %d, %d", &Sdate, &Stime, &Sminute);

	printf("���� ���� �ð��� �Է��Ͻÿ�.(��, ��, ��): ");
	scanf("%d, %d, %d", &Edate, &Etime, &Eminute);

	charge = calculateCarParkingCharge(Sdate, Stime, Sminute, Edate, Etime, Eminute);
	
	printf("���� ����� %d �Դϴ�.", charge);

	printf("\n");
}

void problem2()
{


}


void problem3()
{
	int year;
	int check;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &year);
	check = isLeapYear(year);
	if (check == 1)
	{
		printf("�����Դϴ�.");
	}
	else
	{
		printf("������ �ƴմϴ�.");
	}

	printf("\n");
}


void problem4()
{
	int pattern;
	int line;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &pattern);
	printf("�� ���� �Է��Ͻÿ�: ");
	scanf("%d", &line);
	displayTree(pattern, line);


	printf("\n");
}

void problem5()
{
	int money;
	while (1)
	{
		printf("�󸶸� �Է��Ͻðڽ��ϱ�? (����� %d): ", -1);
		scanf("%d", &money);
		if (money == -1)
		{
			printf("����\n");
			break;
		}
		else
		{
			printf("���ݱ��� �Ѿ��� %d�Դϴ�.\n", save(money));
		}
	}


	printf("\n");
	
}

void problem6()
{
	int money;
	while (1)
	{
		printf("�󸶸� �Է��Ͻðڽ��ϱ�? (����� %d): ", -1);
		scanf("%d", &money);
		if (money == -1)
		{
			printf("����\n");
			break;
		}
		else
		{
			printf("���ݱ��� �Ѿ��� %d�Դϴ�.\n", save(money));
		}
	}

	printf("\n");

}

int calculateCarParkingCharge(int Sdate, int Stime, int Sminute, int Edate, int Etime, int Eminute)
{
	int sumtime = 0;
	int checkdate = 0;
	int charge = 0;

	
	sumtime =(60 * (24-(Stime - Etime)) + 60 - (Sminute - Eminute)) / 60 ;

	checkdate = Edate - Sdate;

	if (checkdate == 1)
	{
		if (sumtime <= 2)
		{
			charge = 3000;
		}
		else if(sumtime > 2 && sumtime < 24)
		{
			charge = (sumtime - 2) * 2000 + 3000;
		}
		else
		{
			charge = 6000;
		}
		return charge;
	}
	else
	{
		charge = checkdate * 6000;
		return charge;
	}

	return 0;

}

int isLeapYear(int year)
{
	if ((year % 4 == 0) || (year % 100 != 0) && (year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void displayTree(int pattern, int numberofLines)
{
	if (pattern == 1)
	{
		for (int i = 0; i <= numberofLines; i++)
		{
			for (int j = numberofLines ; j >= i - 1; j--)
			{
				printf(" ");
			}
			for (int j = 0; j < 2 * i - 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	
	}
	else if(pattern == 2)
	{
		for (int i = 0; i <= numberofLines; i++)
		{
			for (int j = 0; j < i ; j++)
			{
				printf(" ");
			}
			for (int j = numberofLines +1 ; j >= 2*i -1; j--)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}

int save(int amount)
{
	static int sum = 0;
	sum = sum + amount;
	return sum;
}

const int saveLocalOnly( int amount)
{
	int sum = 0;
	sum = sum + amount;
	return sum;
}