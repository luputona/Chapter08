#include "stdafx.h"


void main7()
{
	int num = 0;
	
	printf("start!");

	for (num = 0; num < 20; num++)
	{
		if (num % 2 ==0 || num %3 ==0)
		{
			continue;
		}
		printf("%d : ", num);

	}
	printf("end\n");

}