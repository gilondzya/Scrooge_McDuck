#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

void Ipoteka_po_sum_kred(long long  sum,double stavka,int months)
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
    cout << " Введите стоимость недвижимости (на какую сумму будет взята ипотека).\n Минимальное значение -  1 000 000 рублей.\n >> ";
    cin >> sum;
    while ( sum < 1000000)
    {
        cout << " Слишком маленькая сумма кредита. Попробуйте еще раз.\n >> ";
        cin >> sum;
    }
    if (sum < 4000000)
    {
        cout << " Процентная ставка составляет 20% годовых.\n";
        st = 20.0;
	}
    else if (sum < 10000000)
         {
            cout << " Процентная ставка составляет 17,5% годовых.\n";
            st = 17.5;
         }
         else if (sum >= 10000000)
              {
                cout << " Процентная ставка составляет 13,5% годовых.\n";
                st = 13.5;
              }                  
    st/= 1200;
    cout << " Введите срок кредитования (в месяцах)\n>> ";
    cin >> m;
    
    Ipoteka_po_sum_kred(sum, st, m);
 system("PAUSE");
 return EXIT_SUCCESS;
}
