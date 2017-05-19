#include "stdafx2.h"
#include "stdafx.h"
#include <iostream>

using namespace std;

int Enter1_1() //Включить в vvod.cpp
/*Ввод для двух свитчей.*/
{
	int x;
metka:
	cin.clear();
	cin.sync();

	cin >> x;
	if (cin.fail() || (x != 1 && x != 2 ))
	{
		cout << "\n Error, repeat the input: ";
		goto metka;
	}
	return x;
}

int Enter4_1 () //Включить в vvod.cpp
/*Ввод кол-ва месяцев для ВКЛАДА
*/
{
    int month;
    metka:
    cin.clear();
    cin.sync();
    cin>>month;
    if(cin.fail() || month < 1 || month > 36 )
    {
        cout<<"\n Error, repeat the input: ";
        goto metka;
    }
    return month;
}

long long Enter9 () //Включить в vvod.cpp
/*
 *Ввод ЗП берущих ИПОТЕКУ,КРЕДИТ
*/
{
    long long doh;
    metka:
    cin.clear();
    cin.sync();

    cin>>doh;
    if(cin.fail() || doh<=20000 || doh> 10000000)
    {
        cout<<"\n Error, repeat the input: ";
        goto metka;
    }
    return doh;
}

long long Enter10 () //Включить в vvod.cpp
/*
 *Ввод ежемесячной выплаты берущих ИПОТЕКУ,КРЕДИТ
*/
{
    long long ezhemes ;
    metka:
    cin.clear();
    cin.sync();

    cin>>doh;
    if(cin.fail() || ezhemes<=1500 || ezhemes> 961661)
    {
        cout<<"\n Error, repeat the input: ";
        goto metka;
    }
    return ezhemes;
}

long long Ipoteka_po_sum_kred(long long sum, double stavka, int months)  //В IpotekaSumKr.cpp
/*Ипотека по СУММЕ кредита. Дашина функция. Убрала переплату из аргументов и тела.*/
{
    long long ezh;
    ezh = (sum * ( stavka * pow(stavka + 1, months) ) )/ ((pow(stavka + 1, months) - 1) );
    return ezh;
}

long long An_kredit_po_sum_kred(long long  sum, double stavka, int months)  //В AnnKredSumKr.cpp
/*Аннуит Кредит по СУММЕ кредита. Дашина функция. Убрала переплату из аргументов и тела.*/
{
    long long ezh;
    ezh = (sum * ( stavka * pow(stavka + 1, months) ) )/ ((pow(stavka + 1, months) - 1) );
    return ezh;
}

void Dif_kredit_po_sum(long long sum,double stavka,int months)  //В DifKredSumKr.cpp
/*Диф Кредит по СУММЕ кредита. Дашина функция. Сменила комменты.*/
{
    long double ezh, sezh = 0.0, proc;
    long long  per = 0.0;
    ezh = sum / months;
    for (int i = 1; i <= months; i++)
    {
        proc = ((sum - (i - 1)*(sum / months)) * stavka / 12);
        cout << proc << endl;
        cout << "В " << i << " месяце выплата составит: " << (ezh + proc) << " рублей.\n";
        sezh += ezh + proc;
    }
    per = sezh - sum;
    cout << " Переплата составит: " << per << " рублей.\n";
}





void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "\n        Здравствуйте!\n Добро пожаловать в Скрудж Макдак Банк!\n " <<
            "Для того чтобы узнать всё о КРЕДИТАХ, нажмите цифру 1 на клавиатуре\n" <<
            "Если Вас интересуют выгодные ВКЛАДЫ, нажмите 2\n" <<
            "Хотите взять ИПОТЕКУ? Нажмите 3\n"<<
            "Ваш ответ: ";
    int otv =  Enter1();
    switch (otv)
    {
        case 1:
        {
            cout <<"\n РАЗДЕЛ КРЕДИТ \n"<<
                   "\nЕсли Вас интересует АННУИТЕТНЫЙ кредит, нажмите цифру 1 на клавиатуре\n" <<
                   "Предпочитаете ДИФФЕРЕНЦИРОВАННЫЙ кредит? Нажмите 2\n" <<
                   "Ваш ответ: ";
            int otv1 = Enter1_1();
            switch (otv1)
            {
                case 1:
                {
                    cout <<"\n РАЗДЕЛ АННУИТЕТНЫЙ КРЕДИТ \n"<<
                         "В нашем банке предусмотрено снижение процентной ставки по кредиту для пенсионеров.\n"<<
                         "Пожалуйста, введите Ваш возраст: ";
                    int age = Enter2 ();
                    cout <<"Пожалуйста, введите ваш пол (w - женщина или m - мужчина): ";
                    char pol = Enter3 ();
                    cout<<"Выберите основной, известный Вам, параметр, по которму Вы хотите сделать рассчёт: \n"<<
                          "Нажмите 1, если Вы хотите рассчитать по СРЕДНЕМЕСЯЧНОМУ ДОХОДУ\n"<<
                          "Нажмите 2, если Вы хотите рассчитать по СУММЕ КРЕДИТА\n"<<
                          "Нажмите 3, если Вы хотите рассчитать по ЕЖЕМЕСЯЧНЫМ ВЫПЛАТАМ\n"<<
                          "Ваш ответ: ";
                    int otv1 = Enter1();
                    switch (otv1)
                    {
                        case 1:
                        {
                            cout <<"\n РАЗДЕЛ АННУИТЕТНЫЙ КРЕДИТ ПО СРЕДНЕМЕСЯЧНОМУ ДОХОДУ \n"<<
                                   "Пожалуйста, введите Ваш доход: ";
                            long long double doh = Enter9 ();
                            cout<<"\nВведите предпочтительный для Вас срок в месяцах ";
                            int month = Enter4 ();
                            double prstavka = Prstavka_Kr_lgot(age, pol, month);
                            cout<<"\nВаша процентная ставка составит "<<prstavka<<" процентов.\n"<<
                                  "\n В таком случае максимальная сумма кредита составит: "<< An_kredit_po_sr_doh(doh, month, prstavka)<< " рублей";
                            break;
                        }
                        case 2:
                        {
                            cout <<"\n РАЗДЕЛ АННУИТЕТНЫЙ КРЕДИТ ПО СУММЕ \n"<<
                                   "Пожалуйста, введите желаемую сумму кредита: ";
                            long long double sum = Enter ();
                            cout<<"\nВведите предпочтительный для Вас срок в месяцах ";
                            int month = Enter4 ();
                            double prstavka = Prstavka_Kr_lgot(age, pol, month);
                            cout<<"\nВаша процентная ставка составит "<<prstavka<<" процентов.\n"<<
                                  "\n В таком случае ежемесячная выплата по кредиту составит: "<< An_kredit_po_sum_kred(sum, prstavka, month)<< " рублей\n";
                            break;
                        }
                        case 3:
                        {
                            cout <<"\n РАЗДЕЛ АННУИТЕТНЫЙ КРЕДИТ ПО ЕЖЕМЕСЯЧНЫМ ВЫПЛАТАМ \n"<<
                                   "Пожалуйста, введите ежемесячную плату: ";
                            long long double ezhemes = Enter10 ();
                            cout<<"\nВведите предпочтительный для Вас срок в месяцах ";
                            int month = Enter4 ();
                            double prstavka = Prstavka_Kr_lgot(age, pol, month);
                            cout<<"\nВаша процентная ставка составит "<<prstavka<<" процентов.\n"<<
                                  "\n В таком случае максимальная сумма кредита составит: "<< Annuitet_po_ezhemes(ezhemes,prstavka,12, month/12)<< " рублей";
                            break;
                        }
                    }
                    break;
                }
                case 2:
                {
                    cout <<"\n РАЗДЕЛ ДИФФЕРЕНЦИРОВАННЫЙ КРЕДИТ \n"<<
                           "В нашем банке предусмотрено снижение процентной ставки по кредиту для пенсионеров.\n"<<
                           "Пожалуйста, введите Ваш возраст: ";
                    int age = Enter2 ();
                    cout <<"Пожалуйста, введите ваш пол (w - женщина или m - мужчина): ";
                    char pol = Enter3 ();
                    cout<<"Выберите основной, известный Вам, параметр, по которму Вы хотите сделать рассчёт: \n"<<
                          "Нажмите 1, если Вы хотите рассчитать по СРЕДНЕМЕСЯЧНОМУ ДОХОДУ\n"<<
                          "Нажмите 2, если Вы хотите рассчитать по СУММЕ\n"<<
                          "Ваш ответ: ";
                    int otv2 = Enter1_1 ();
                    switch (otv2)
                    {
                        case 1:
                        {
                            cout <<"\n РАЗДЕЛ ДИФФЕРЕНЦИРОВАННЫЙ КРЕДИТ ПО СРЕДНЕМЕСЯЧНОМУ ДОХОДУ \n"<<
                                   "Пожалуйста, введите Ваш доход: ";
                            long long double doh = Enter9 ();
                            cout<<"\nВведите предпочтительный для Вас срок в месяцах ";
                            int month = Enter4 ();
                            double prstavka = Prstavka_Kr_lgot(age, pol, month);
                            cout<<"\nВаша процентная ставка составит "<<prstavka<<" процентов.\n"<<
                                  "\nВ таком случае максимальная сумма кредита составит: "<<     << " рублей";
                            break;


                        }
                        case 2:
                        {
                            cout <<"\n РАЗДЕЛ ДИФФЕРЕНЦИРОВАННЫЙ КРЕДИТ ПО СУММЕ \n"<<
                                   "Пожалуйста, введите желаемую сумму кредита: ";
                            long long double sum = Enter ();
                            cout<<"\nВведите предпочтительный для Вас срок в месяцах ";
                            int month = Enter4 ();
                            double prstavka = Prstavka_Kr_lgot(age, pol, month);
                            cout<<"\nВаша процентная ставка составит "<<prstavka<<" процентов.\n"<<
                                  "\nВ таком случае выплаты по кредиту : ";
                            Dif_kredit_po_sum(sum,prstavka,month);
                            break;
                        }
                    }
                    break;
                }
            }
            break;
        }
        case 2:
        {
            cout << "\n РАЗДЕЛ ВКЛАД \n"<<
                    "\nЕсли Вы хотите расчитать ставку с учетом:\n "<<
                    "ЕЖЕМЕСЯЧНОЙ капитализации процентов, нажмите цифру 1 на клавиатуре\n" <<
                    "ЕЖЕКВАРТАЛЬНОЙ капитализации процентов, нажмите 2\n" <<
                    "Ваш ответ: ";
            int otv2 = Enter1_1();
            switch (otv2)
            {
                case 1:
                {
                    break;
                }

                case 2:
                {
                    break;
                }


            }
            break;
        }
        case 3:
        {
            cout <<"\n РАЗДЕЛ ИПОТЕКА \n"<<
                   "В нашем банке предусмотрено снижение процентной ставки по ипотеке для молодых семей с детьми.\n"<<
                   "Пожалуйста, введите Ваш возраст: ";
            int age = Enter8 ();
            cout <<"Нажмите 1, если у Вас есть дети или 0 в противном случае: ";
            bool child = Enter7 ();
            double prstavka = Prstavka_Ip_lgot(age,child);
            cout<<"Ваша процентная ставка составит "<<prstavka<<"процентов.\n"<<
                  "Выберите основной, известный Вам, параметр, по которму Вы хотите сделать рассчёт: \n"<<
                  "Нажмите 1, если Вы хотите рассчитать по СРЕДНЕМЕСЯЧНОМУ ДОХОДУ\n"<<
                  "Нажмите 2, если Вы хотите рассчитать по СУММЕ ИПОТЕКИ\n"<<
                  "Нажмите 3, если Вы хотите рассчитать по ЕЖЕМЕСЯЧНЫМ ВЫПЛАТАМ\n"<<
                  "Ваш ответ: ";
            int otv3 = Enter1();
            switch (otv3)
            {
                case 1:
                {
                    cout <<"\n РАЗДЕЛ ИПОТЕКА ПО СРЕДНЕМЕСЯЧНОМУ ДОХОДУ \n"<<
                           "Пожалуйста, введите Ваш доход: ";
                    long long double doh = Enter9 ();
                    cout<<"\n Минимальный срок, на который Вы можете взять ипотеку, составляет 1 год."<<
                          "\n В таком случае максимальная сумма ипотечного кредита составит: "<< Ipoteka_po_sr_doh(doh, 12, prstavka)<< " рублей"<<
                          "\n Максимальный срок, на который Вы можете взять ипотеку, составляет 30 лет."<<
                          "\n В таком случае максимальная сумма ипотечного кредита составит: "<< Ipoteka_po_sr_doh(doh, 360, prstavka)<< " рублей\n"<<
                          "\n Введите предпочтительный для Вас срок в месяцах: ";
                    int months = Enter6 ();
                    cout<<"\n Максимальная сумма ипотечного кредита составит: "<< Ipoteka_po_sr_doh(doh, months, prstavka)<< " рублей\n";
                    break;
                }
                case 2:
                {
                    cout <<"\n РАЗДЕЛ ИПОТЕКА ПО СУММЕ \n"<<
                           "Пожалуйста, введите желаемую сумму ипотечного кредита: ";
                    long long double sum = Enter5 ();
                    cout<<"\n Минимальный срок, на который Вы можете взять ипотеку, составляет 1 год."<<
                          "\n В таком случае ежемесячная выплата по кредиту составит: "<< Ipoteka_po_sum_kred(sum, prstavka, 12)<< " рублей"<<
                          "\n Максимальный срок, на который Вы можете взять ипотеку, составляет 30 лет."<<
                          "\n В таком случае ежемесячная выплата по кредиту составит: "<< Ipoteka_po_sum_kred(sum, prstavka, 360)<< " рублей\n"<<
                          "\n Введите предпочтительный для Вас срок в месяцах: ";
                    int months = Enter6 ();
                    cout<<"\n Ежемесячная выплата по кредиту составит: "<< Ipoteka_po_sum_kred(sum, prstavka, months)<< " рублей\n";
                    break;
                }
                case 3:
                {
                    cout <<"\n РАЗДЕЛ ИПОТЕКА ПО ЕЖЕМЕСЯЧНЫМ ВЫПЛАТАМ \n"<<
                           "Пожалуйста, введите ежемесячную плату: ";
                    long long double ezhemes = Enter10 ();
                    cout<<"\n Минимальный срок, на который Вы можете взять ипотеку, составляет 1 год."<<
                          "\n В таком случае максимальная сумма ипотечного кредита составит: "<< Ipoteka_po_ezhemes(ezhemes,prstavka, 12)<< " рублей"<<
                          "\n Максимальный срок, на который Вы можете взять ипотеку, составляет 30 лет."<<
                          "\n В таком случае максимальная сумма ипотечного кредита составит: "<< Ipoteka_po_ezhemes(ezhemes,prstavka, 360)<< " рублей\n"<<
                          "\n Введите предпочтительный для Вас срок в месяцах: ";
                    int months = Enter6 ();
                    cout<<"\n Максимальная сумма ипотечного кредита составит: "<< Ipoteka_po_ezhemes(ezhemes,prstavka, months)<< " рублей\n";
                    break;
                }
            }
            break;
        }
    }



	system("PAUSE");
	return;
}
