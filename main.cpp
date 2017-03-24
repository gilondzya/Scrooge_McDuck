#include <iostream>
#include "vklad.cpp"
#include "annuit_po_ezhemes.cpp"

using namespace std;

int main()
{
	setlocale(LC_ALL,"RUSSIAN");

        int otv;
	cout << "Какую операцию Вы хотите совершить?\n";
	cout << "1. Расчитать эффективную ставку по вкладу.\n";
	cout << "2. Расчитать максимальную сумму кредита.\n";
	cin >> otv;

	switch(otv)
	{
		case 1:
		{
			int otv;
			cout << "Расчитать ставку с учетом:\n";
			cout << "1. Ежемесячной капитализации процентов.\n";
			cout << "2. Ежеквартальной капитализации процентов.\n";
			cin >> otv;

			switch(otv)
			{
				case 1:
				{
					int T;
					cout << "Введите срок размещения вклада в месяцах: ";
					cin >> T;
					cout << endl;

					float pr_stavka;
					cout << "Введите простую ставку в процентах ";
					cin >> pr_stavka;
					cout << endl;

					float ef_stavka;
					ef_stavka = raschet_stavki_po_vkladu_ezhemes(T, pr_stavka / 100);
					cout << "Эффективная ставка по вкладу сроком на " << T << " месяцев равна " << ef_stavka << endl;

					break;
				}

				case 2:
				{
                                        float pr_stavka;
					cout << "Введите простую ставку в процентах ";
					cin >> pr_stavka;
					cout << endl;

					float ef_stavka;
					ef_stavka = raschet_stavki_po_vkladu_ezhekvar(pr_stavka / 100);
					cout << "Эффективная ставка по вкладу равна " << ef_stavka << endl;
					break;
				}
				
				default:
				{
				        cout << "Ошибка ввода\n";
					break;
				}
			}
		 }






	system("PAUSE");
	return 0;
}
