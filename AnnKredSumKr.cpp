#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

void An_kredit_po_sum_kred(long long  sum,double stavka,int months)
{
	long double ezh;
 	long long  per = 0.0;
 	ezh = (sum * ( stavka * pow(stavka + 1, months) ) )/ ((pow(stavka + 1, months) - 1) );
 	per = ezh * months - sum;
 	cout << " Сумма кредита: " << sum << "руб.\n Срок кредитования: "<< months << " мес.\n Ежемесячный платеж: " << ezh << " руб.\n Переплата по кредиту: " << per << " руб.\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    long long  sum;    // сумма кредита, который хочет взять клиент
    double st;             	 // процентная ставка
    int m;             		 // время, на которое будет рассчитываться кредит (в месяцах)
    cout << " Введите сумму кредита.\n Минимальное значение -  100 000 рублей.\n >> ";
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
		cout << "Процентная ставка составит 17.6%.\n";
		st = 17.6;
	}
	else if (m <= 48 && m > 0)
		 {
		     cout << "Процентная ставка составит 20%.\n";
		     st = 20.0;
		 }
		 else if (m > 48)
		 	  {
			      cout << "Процентная ставка составит 23.1%.\n";
				  st = 23.1;
			  }
	st/= 1200;    
    
    An_kredit_po_sum_kred(sum, st, m);
 system("PAUSE");
 return EXIT_SUCCESS;
}
