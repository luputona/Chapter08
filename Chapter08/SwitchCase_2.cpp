#include "stdafx.h"

void main10()
{
	char sel = 0;

	printf("M 오전, A 오후, E저녁 \n");
	printf("입력 : ");
	scanf_s("%c",&sel);

	switch (sel)
	{
	case 'M':
	case 'm':
		printf("Morning\n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon\n");
		break;
	case 'E':
	case 'e':
		printf("Evening\n");
		break;
	
	}

}