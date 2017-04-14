/*
  Ипотека по схеме «А» (аннуитетная) 
*/
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
/*
ezhemes - сумма ежемесячного платежа
stavka - годовая процентная ставка, в коэффициентах (0,155 = 15,5% / 100%) 
summa - общая сумма займа 
months - срок погашения в месяцах 
*/
long long double Ipoteka_po_ezhemes(long long double ezhemes,double stavka,int months)
{
  long long double summa;
  
  summa = ( ezhemes * (pow(stavka + 1, months) - 1) )/ ( stavka * pow(stavka + 1, months) ) ;
  return summa;
}


double kstavka(double pr)
/* перевод процентной ставки в коэффициентную */
{
  return pr/100;       
}

