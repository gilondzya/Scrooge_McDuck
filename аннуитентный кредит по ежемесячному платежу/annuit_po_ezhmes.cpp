#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
/*
ezhemes - сумма ежемесячного платежа
stavka - процентная ставка, в коэффициентах (0,155 = 15,5% / 100%)
summa - сумма кредита (основной долг)
years - срок погашения в годах
kolpr - число начислений процентов в течение года
*/



long long double  Annuitet_po_ezhemes(long long double ezhemes,double stavka, int kolpr, double years)
{
  long long double summa;
  summa = ezhemes * kolpr * ( 1 - 1/( pow(1+stavka/kolpr,years*kolpr) ) );
  return summa;
}

double kstavka(double pr)
/* перевод процентной ставки в коэффициентную */
{
  return pr/100;       
}


