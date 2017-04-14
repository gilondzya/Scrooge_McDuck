/*
  »потека по схеме Ђјї (аннуитетна€) 
*/
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
/*
ezhemes - сумма ежемес€чного платежа
stavka - годова€ процентна€ ставка, в коэффициентах (0,155 = 15,5% / 100%) 
summa - обща€ сумма займа 
months - срок погашени€ в мес€цах 
*/
void Ipoteka_po_ezhemes(long double ezhemes,double stavka,int months)
{
  long double summa;
  
  summa = ( ezhemes * (pow(stavka + 1, months) - 1) )/ ( stavka * pow(stavka + 1, months) ) ;
  cout<<"ѕри ежемес€чном платеже "<<ezhemes<<" и сроке погашени€ "<<months<<" мес€цев можно вз€ть ипотеку суммой : "<<summa<<" рублей"<<endl;
}


double kstavka(double pr)
/* перевод процентной ставки в коэффициентную */
{
  return pr/100;       
}

int main()
{
 setlocale(LC_ALL,"Russian"); 
 double Stavka = 12;
 double Y1=60; //5 лет
 double Y2=120;  //10 лет
 double Y3=240; //20 лет
 
 long double Ezhemes;
 cout<< "¬ведите ежемес€чный платЄж : ";
 cin>>Ezhemes;
 
 Ipoteka_po_ezhemes(Ezhemes,kstavka(Stavka)/12, Y1);
 Ipoteka_po_ezhemes(Ezhemes,kstavka(Stavka)/12, Y2);
 Ipoteka_po_ezhemes(Ezhemes,kstavka(Stavka)/12, Y3);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
