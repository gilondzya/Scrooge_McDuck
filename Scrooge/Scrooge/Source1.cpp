#include "stdafx.h"

using namespace std;

float raschet_stavki_po_vkladu_ezhemes(int srok, float stavka)
{
	float rezult = 1;

	for (int i = 0; i <= srok; i++)
		rezult *= 1 + stavka / 12;

	rezult = (rezult - 1) * 12 / srok;

	return rezult / 100;
}

float raschet_stavki_po_vkladu_ezhekvar(float stavka)
{
	float rezult = 1;

	for (int i = 0; i <= 4; i++)
		rezult *= 1 + stavka / 4;

	rezult = (rezult - 1) * 100;

	return rezult / 100;
}



