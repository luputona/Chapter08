#include"stdafx.h"


void main4()
{
	int nOpt = 0;
	double num1 = 0.0f;
	double num2 = 0.0f;
	double result = 0.0f;

	printf("1.���� 2.���� 3.���� 4.������ \n");
	printf("����?:");
	scanf_s("%d", &nOpt);

	printf("�� ���� �Ǽ� �Է� :");
	scanf_s("%lf %lf", &num1, &num2);

	if (nOpt ==1)
	{
		result = num1 + num2;
	}
	else if(nOpt == 2)
	{
		result = num1 - num2;
	}
	else if(nOpt == 3)
	{
		result = num1 * num2;
	}
	else if (nOpt == 4)
	{
		result = num1 / num2;
	}

	printf("��� : %lf \n", result);
}