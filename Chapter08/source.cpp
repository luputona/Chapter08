//� �ڿ��� n�� ���� ��, d(n)�� n�� �� �ڸ��� ���ڵ�� n �ڽ��� ���� ���ڶ�� ��������.
//
//���� ���
//
//d(91) = 9 + 1 + 91 = 101
//�� ��, n�� d(n)�� ���׷�����(generator)��� �Ѵ�.���� ������ 91�� 101�� ���׷������̴�.
//
//� ���ڵ��� �ϳ� �̻��� ���׷����͸� ������ �ִµ�, 101�� ���׷����ʹ� 91 �� �ƴ϶� 100�� �ִ�.
//�׷��� �ݴ��, ���׷����Ͱ� ���� ���ڵ鵵 ������, 
//�̷� ���ڸ� �ε��� ������ Kaprekar�� ���� �ѹ�(self - number)�� �̸� �ٿ���.���� ��� 1, 3, 5, 7, 9, 20, 31 �� ���� �ѹ� ���̴�.
//
//1 �̻��̰� 5000 ���� ���� ��� ���� �ѹ����� ���� ���϶�.
#include"stdafx.h"

#include <iostream>
using namespace std;

bool check[5000];

void setD(int i)
{
	while (true)
	{
		int idx = i;
		int tmp = i;
		while (tmp)
		{
			idx = idx + tmp % 10;
			tmp = tmp / 10;
			cout << "i : " << i << " tmp : " << tmp << " idx : " << idx << " check[" << i << "] : " << check[i] << endl;
		}
		if (idx < 5000 && check[idx])
		{
			check[idx] = false;
		}			
		else
		{			
			break;
		}
		//cout << "i : " << i << "tmp : " << tmp << "idx : " << idx << " check[" << i << "] : " << check[i] << endl;
	}
}
int main99()
{
	fill_n(check, 5000, true);
	for (int i = 1; i<5000; i++) 
		setD(i); //d(n) > n �̹Ƿ� 5000������ üũ�ص� �ȴ�.
	long long sum = 0;
	for (int i = 1; i < 5000; i++)
	{
		if (check[i] == true)
		{
			sum += i;
		}
	}
	
		
	cout << sum << endl;
	return 0;
}