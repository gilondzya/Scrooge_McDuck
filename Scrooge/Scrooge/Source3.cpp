#include "stdafx.h"

long long Ipoteka_po_sr_doh(long double  doh, int months, double stavka)
{
	long long ezh;
	ezh = doh - 10500;
	long long sum;
	sum = ezh * months / pow(stavka + 1, months / 12);
	return sum;
}

