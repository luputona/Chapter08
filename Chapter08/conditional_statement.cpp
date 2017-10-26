#include "stdafx.h"

void main5()
{
	int num = 0;
	int abs = 0;

	printf("점수 입력 : ");
	scanf_s("%d",&num);

	abs = num > 0 ? num : num * (-1);
	printf("절대값 : %d \n",abs);
}