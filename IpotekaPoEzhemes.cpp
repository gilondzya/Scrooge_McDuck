#include <cstdlib>
#include <iostream>
#include <cmath>
#include "stdafx.h"

using namespace std;
/*
ezhemes - ñóììà åæåìåñÿ÷íîãî ïëàòåæà
stavka - ãîäîâàÿ ïðîöåíòíàÿ ñòàâêà, â êîýôôèöèåíòàõ (0,155 = 15,5% / 100%)
summa - îáùàÿ ñóììà çàéìà
months - ñðîê ïîãàøåíèÿ â ìåñÿöàõ
*/
	long long double Ipoteka_po_ezhemes(long double ezhemes, double stavka, int months)
	{
	long long double summa;
	
		summa = (ezhemes * (pow(stavka + 1, months) - 1)) / (stavka * pow(stavka + 1, months));
		return summa;
	}
