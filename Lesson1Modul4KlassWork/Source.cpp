#include<stdio.h>
#include<iostream>
#include<locale.h>

void task1()
{
	int n, i, sum=0;

	printf("\n ������� �����");
	scanf_s("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			sum = sum + i;
		}
				
	}
	printf("\n ����� ���� �������� ����� ���������� ����� = %d \n\n", sum);
}

void task2()
{
	int i = 0, n = 0, sum = 0;
	float average;

	do
	{
		printf("\n ������� ����� => ");
		scanf_s("%d", &n);

		i++;
		sum = sum + n;
		

	} while (n != 0);
	
	average = (float)n / i;
	printf("\n ������� ���-�� ���� �������������: %d", i);
	printf("\n ����� ���� ��������� �������������: %d", sum);
	printf("\n ������� �������������� ��������� �����: %f \n\n", average);

}

int main()
{
	setlocale(LC_ALL, "");

	int task=0;

	do
	{
		printf("\n ������� ����� ������� => ");
		scanf_s("%d", &task);

	} while (task > 1 && task >=7);

		switch (task)
		{
		case 1: task1(); break;
		case 2: task2(); break;
		}

	system("pause");
	
}