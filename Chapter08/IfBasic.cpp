
#include "stdafx.h"


void main1()
{
	int num = 0;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num < 0)
	{
		printf("�Է� ���� 0���� �۴�. \n");
	}

	if (num > 0)
	{
		printf("�Է� ���� 0���� ũ�� \n");
	}

	if (num == 0)
	{
		printf("�Է� ���� 0�̴�. \n");
	}

}