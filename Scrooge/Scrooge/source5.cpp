#include <iostream>
#include "stdafx.h"

long long Enter()
/*
*������������ ������ ����� ��� ����� ������� ��� ��
��� � ���������� �� ���������� ��������� ����� �������� ��� ����� ��������
*/
{
	long long x;
metka:
	cin.clear();
	cin.sync();

	cin >> x;
	if (cin.fail() || x <= 10000 || x> 1000000000)
	{
		cout << "\n Error, repeat the input: ";
		goto metka;
	}
	return x;
}


int Enter1()
/*
* ������������ ������ ����� ��� ������� - ������� ����� � ������� -
* ������� � �������
*/
{
	int x;
metka:
	cin.clear();
	cin.sync();

	cin >> x;
	if (cin.fail() || (x != 1 && x != 2 && x != 3))
	{
		cout << "\n Error, repeat the input: ";
		goto metka;
	}
	return x;
}