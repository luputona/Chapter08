#include "stdafx.h"

void main10()
{
	char sel = 0;

	printf("M ����, A ����, E���� \n");
	printf("�Է� : ");
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