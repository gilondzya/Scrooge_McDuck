#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

void An_kredit_po_sr_doh(long double  doh, int months, double stavka)
{
	long double ezh;
 	if (doh < 21000 && doh > 10500)		 //���� ����� < ������������ ��������*2
 		ezh = doh - 10500;               //����. ������� = ����� -  ����������� �������
 	else if (doh >= 21000 )
	 	 	ezh = doh/2;
	 	 else 
		 {
		 	 cout << "��� ����� ������� ������, �� �� ����� ���� ��� ������.\n";
		 	 return;
		 }
	long long sum1, sum2;
	sum1 = ezh * months / pow(stavka + 1, months / 12);
 	cout << " ������������ ����� �������, ������� ������ ���� ����: " << sum1 << " ���.\n ���� ������������: "<< months << " ���.\n ����������� ������: " << ezh << " ���.\n ��������� �� �������: " << (ezh * months - sum1) << " ���.\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    long double  dohod;    // ����� �������, ������� ����� ����� ������
    double stav;             	 // ���������� ������
    int mon;             		 // �����, �� ������� ����� �������������� ������ (� �������)
    cout << " ������� ��� �������������� �����:\n >> ";
    cin >> dohod;
    cout << " ������� ���� ������������ (� �������)\n >> ";
    cin >> mon;
    while (mon < 6)
    {
    	cout << "������� ��������� ����. ���������� ��� ���.\n >> ";
    	cin >> mon;
	}
    if (mon <= 12 && mon > 0)
    {
		cout << "���������� ������ �������� 18%.\n";
		stav = 18.0;
	}
	else if (mon <= 48 && mon > 0)
		 {
		     cout << "���������� ������ �������� 20%.\n";
		     stav = 20.0;
		 }
		 else if (mon > 48)
		 	  {
			      cout << "���������� ������ �������� 25%.\n";
				  stav = 25.0;
			  }
	stav/= 1200;    
    
    An_kredit_po_sr_doh(dohod, mon, stav);
 system("PAUSE");
 return EXIT_SUCCESS;
}
