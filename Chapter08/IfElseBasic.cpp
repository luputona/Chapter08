#include "stdafx.h"

void main3()
{
	int num = 0;
	printf("정수 입력 :");
	scanf_s("%d", &num);

	if (num <0)
	{
		printf("입력 값은 0 보다 작다. \n");
	}
	else
	{
		printf("입력 값은 0보다 작지 않다. \n");
	}


}