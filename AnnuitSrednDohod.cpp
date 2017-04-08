#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

void An_kredit_po_sr_doh(long double  doh, int months, double stavka)
{
	long double ezh;
 	if (doh < 21000 && doh > 10500)		 //если доход < прожиточного минимума*2
 		ezh = doh - 10500;               //ежем. выплата = доход -  прожиточный минимум
 	else if (doh >= 21000 )
	 	 	ezh = doh/2;
	 	 else 
		 {
		 	 cout << "Ваш доход слишком низкий, мы не можем дать вам кредит.\n";
		 	 return;
		 }
	long long sum1, sum2;
	sum1 = ezh * months / pow(stavka + 1, months / 12);
 	cout << " Максимальная сумма кредита, которую сможет дать банк: " << sum1 << " руб.\n Срок кредитования: "<< months << " мес.\n Ежемесячный платеж: " << ezh << " руб.\n Переплата по кредиту: " << (ezh * months - sum1) << " руб.\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    long double  dohod;    // сумма кредита, который хочет взять клиент
    double stav;             	 // процентная ставка
    int mon;             		 // время, на которое будет рассчитываться кредит (в месяцах)
    cout << " Введите ваш среднемесячный доход:\n >> ";
    cin >> dohod;
    cout << " Введите срок кредитования (в месяцах)\n >> ";
    cin >> mon;
    while (mon < 6)
    {
    	cout << "Слишком маленький срок. Попробуйте ещё раз.\n >> ";
    	cin >> mon;
	}
    if (mon <= 12 && mon > 0)
    {
		cout << "Процентная ставка составит 18%.\n";
		stav = 18.0;
	}
	else if (mon <= 48 && mon > 0)
		 {
		     cout << "Процентная ставка составит 20%.\n";
		     stav = 20.0;
		 }
		 else if (mon > 48)
		 	  {
			      cout << "Процентная ставка составит 25%.\n";
				  stav = 25.0;
			  }
	stav/= 1200;    
    
    An_kredit_po_sr_doh(dohod, mon, stav);
 system("PAUSE");
 return EXIT_SUCCESS;
}
