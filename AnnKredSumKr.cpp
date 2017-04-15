#include <cstdlib>
#include <iostream>
#include <cmath>
#include "stdafx.h"

using namespace std;

void An_kredit_po_sum_kred(long long  sum,double stavka,int months)
{
	long double ezh;
 	long long  per = 0.0;
 	ezh = (sum * ( stavka * pow(stavka + 1, months) ) )/ ((pow(stavka + 1, months) - 1) );
 	per = ezh * months - sum;
 	cout << " ¿¿¿¿¿ ¿¿¿¿¿¿¿: " << sum << "¿¿¿.\n ¿¿¿¿ ¿¿¿¿¿¿¿¿¿¿¿¿: "<< months << " ¿¿¿.\n ¿¿¿¿¿¿¿¿¿¿¿ ¿¿¿¿¿¿: " << ezh << " ¿¿¿.\n ¿¿¿¿¿¿¿¿¿ ¿¿ ¿¿¿¿¿¿¿: " << per << " ¿¿¿.\n";
}
