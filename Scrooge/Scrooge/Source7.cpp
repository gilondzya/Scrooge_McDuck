#include "stdafx.h"

long long An_kredit_po_sr_doh(long double  doh, int months, double stavka)
{
	long double ezh;
	/* if (doh < 21000 && doh > 10500)		 //если доход < прожиточного минимума*2
	ezh = doh - 10500;               //ежем. выплата = доход -  прожиточный минимум
	else if (doh >= 21000 )
	ezh = doh/2;
	else
	{
	cout << "Ваш доход слишком низкий, мы не можем дать вам кредит.\n";
	return;
	} */
	ezh = 0.2 * doh;
	long long sum;
	sum = ezh * months / pow(stavka + 1, months / 12);
	return sum;
}