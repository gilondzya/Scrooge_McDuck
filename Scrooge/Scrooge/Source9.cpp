#include "stdafx.h"

long long Annuitet_po_ezhemes(long double ezhemes, double stavka, int kolpr, double years)
{
	long long summa;

	summa = ezhemes * kolpr * (1 - 1 / (pow(1 + stavka / kolpr, years*kolpr)));
	return summa;
}


double kstavka(double pr)
{
	return pr / 100;
}