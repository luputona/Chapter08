#include "stdafx.h"

void main6()
{
	int sum = 0;
	int num = 0;
	
	while (1)
	{
		sum += num;

		if (sum > 5000)
		{
			break;
		}
		num++;
		printf("sum1 : %d num : %d\n", sum, num);
	}
	printf("sum : %d \n", sum);
	printf("num : %d \n", num);

}