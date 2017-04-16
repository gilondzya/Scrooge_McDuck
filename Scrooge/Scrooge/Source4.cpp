#include "stdafx.h"

long long Ipoteka_po_ezhemes(long double ezhemes, double stavka, int months)
{
	long long summa;

	summa = (ezhemes * (pow(stavka + 1, months) - 1)) / (stavka * pow(stavka + 1, months));
	return summa;
}