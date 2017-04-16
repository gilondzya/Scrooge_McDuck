#include <cmath>
#include "stdafx.h"

long long Ipoteka_po_sum_kred(long long sum, double stavka, int months, long long &per)
{
	long long ezh;
	ezh = (sum * (stavka * pow(stavka + 1, months))) / ((pow(stavka + 1, months) - 1));
	per = ezh * months - sum;
	return ezh;
}

