#include <cstdlib>
#include <iostream>
#include <cmath>
#include "stdafx.h"

using namespace std;

long long double An_kredit_po_sr_doh(long double  doh, int months, double stavka)
{
	long double ezh;
 /* if (doh < 21000 && doh > 10500)		 //���� ����� < ������������ ��������*2
 		ezh = doh - 10500;               //����. ������� = ����� -  ����������� �������
 	else if (doh >= 21000 )
	 	 	ezh = doh/2;
	 	 else 
		 {
		 	 cout << "��� ����� ������� ������, �� �� ����� ���� ��� ������.\n";
		 	 return;
		 } */
	ezh = 0.2 * doh;
	long long double sum;
	sum = ezh * months / pow(stavka + 1, months / 12);
	return sum;
}
