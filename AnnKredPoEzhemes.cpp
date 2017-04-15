#include <cstdlib>
#include <iostream>
#include <cmath>
#include "stdafx.h"

using namespace std;

long long double Annuitet_po_ezhemes(long double ezhemes,double stavka, int kolpr, double years)
{
  long long double summa;
  
  summa = ezhemes * kolpr * ( 1 - 1/( pow(1+stavka/kolpr,years*kolpr) ) );
  return summa;
}


double kstavka(double pr)
{
  return pr/100;       
}

