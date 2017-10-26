#include"stdafx.h"


void main4()
{
	int nOpt = 0;
	double num1 = 0.0f;
	double num2 = 0.0f;
	double result = 0.0f;

	printf("1.µ¡¼À 2.»¬¼À 3.°ö¼Á 4.³ª´°¼À \n");
	printf("¼±ÅÃ?:");
	scanf_s("%d", &nOpt);

	printf("µÎ °³ÀÇ ½Ç¼ö ÀÔ·Â :");
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

	printf("°á°ú : %lf \n", result);
}