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
void Annuitet_po_ezhemes(long double ezhemes,double stavka, int kolpr, double years)
{
  long double summa;
  
  summa = ezhemes * kolpr * ( 1 - 1/( pow(1+stavka/kolpr,years*kolpr) ) );
  cout<<"При ежемесячном платеже "<<ezhemes<<" и сроке погашения "<<years<<" лет можно взять кредит суммой : "<<summa<<" рублей"<<endl;
}


double kstavka(double pr)
/* перевод процентной ставки в коэффициентную */
{
  return pr/100;       
}

int main()
{
 setlocale(LC_ALL,"Russian"); 
 double Stavka = 15.5;
 int Kolpr = 12;
 double Y1=1;
 double Y2=5;
 double Y3=10.5; 
 
 long double Ezhemes;
 cout<< "Введите ежемесячный платёж : ";
 cin>>Ezhemes;
 
 Annuitet_po_ezhemes(Ezhemes,kstavka(Stavka), Kolpr, Y1);
 Annuitet_po_ezhemes(Ezhemes,kstavka(Stavka), Kolpr, Y2);
 Annuitet_po_ezhemes(Ezhemes,kstavka(Stavka), Kolpr, Y3);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
