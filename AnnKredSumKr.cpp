#include <cstdlib>
#include <iostream>
#include <cmath>
#include "stdafx.h"

using namespace std;

long long double An_kredit_po_sum_kred(long long  sum, double stavka, int months, long long double &per)
{
	long long double ezh;
 	per = 0.0;
 	ezh = (sum * ( stavka * pow(stavka + 1, months) ) )/ ((pow(stavka + 1, months) - 1) );
 	per = ezh * months - sum;
	return ezh;
}
