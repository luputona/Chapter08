#include "stdafx.h"

void main5()
{
	int num = 0;
	int abs = 0;

	printf("���� �Է� : ");
	scanf_s("%d",&num);

	abs = num > 0 ? num : num * (-1);
	printf("���밪 : %d \n",abs);
}