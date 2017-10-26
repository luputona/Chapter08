//어떤 자연수 n이 있을 때, d(n)을 n의 각 자릿수 숫자들과 n 자신을 더한 숫자라고 정의하자.
//
//예를 들어
//
//d(91) = 9 + 1 + 91 = 101
//이 때, n을 d(n)의 제네레이터(generator)라고 한다.위의 예에서 91은 101의 제네레이터이다.
//
//어떤 숫자들은 하나 이상의 제네레이터를 가지고 있는데, 101의 제네레이터는 91 뿐 아니라 100도 있다.
//그런데 반대로, 제네레이터가 없는 숫자들도 있으며, 
//이런 숫자를 인도의 수학자 Kaprekar가 셀프 넘버(self - number)라 이름 붙였다.예를 들어 1, 3, 5, 7, 9, 20, 31 은 셀프 넘버 들이다.
//
//1 이상이고 5000 보다 작은 모든 셀프 넘버들의 합을 구하라.
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
		setD(i); //d(n) > n 이므로 5000까지만 체크해도 된다.
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