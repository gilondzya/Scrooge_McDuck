#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

void Dif_kredit_po_sum(long long sum,double stavka,int months)
{
 	long double ezh, sezh = 0.0, proc;
	long long  per = 0.0;
 	cout << " Сумма кредита: " << sum << "руб.\n Срок кредитования: "<< months << " мес.\n";
 	ezh = sum / months;
	for (int i = 1; i <= months; i++)
	{
		proc = ((sum - (i - 1)*(sum / months)) * stavka / 12);
		cout << " Ежемесячный платёж на " << i << " месяц: " << (ezh + proc) << " руб.\n";
		sezh += ezh + proc;
	}
  	per = sezh - sum;
	cout << " Переплата по кредиту: " << per << " руб.\n";
}



int main()
{
    setlocale(LC_ALL, "Russian");
    long long  sum;     // сумма кредита, который хочет взять клиент
    double st;          // процентная ставка
    int m;              // время, на которое будет рассчитываться кредит (в месяцах)
    cout << " Введите сумму кредита.\n >> ";
    cin >> sum;
    while ( sum < 100000)
    {
        cout << " Слишком маленькая сумма кредита. Попробуйте еще раз.\n >> ";
        cin >> sum;
    }
    cout << " Введите срок кредитования (в месяцах)\n >> ";
    cin >> m;
    while (m < 6)
    {
    	cout << "Слишком маленький срок. Попробуйте ещё раз.\n >> ";
    	cin >> m;
	}
    if (m <= 12 && m > 0)
    {
		cout << "Процентная ставка составит 13.9%.\n";
		st = 13.9;
	}
	else if (m <= 48 && m > 0)
		 {
		     cout << "Процентная ставка составит 18%.\n";
		     st = 18.0;
		 }
		 else if (m > 48)
		 	  {
			      cout << "Процентная ставка составит 22.5%.\n";
				  st = 22.5;
			  }
	st/= 100;    
    Dif_kredit_po_sum(sum, st, m);
 system("PAUSE");
 return EXIT_SUCCESS;
}
