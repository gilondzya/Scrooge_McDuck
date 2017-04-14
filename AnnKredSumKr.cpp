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
 	cout << " ����� �������: " << sum << "���.\n ���� ������������: "<< months << " ���.\n ����������� ������: " << ezh << " ���.\n ��������� �� �������: " << per << " ���.\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    long long  sum;    // ����� �������, ������� ����� ����� ������
    double st;             	 // ���������� ������
    int m;             		 // �����, �� ������� ����� �������������� ������ (� �������)
    cout << " ������� ����� �������.\n ����������� �������� -  100 000 ������.\n >> ";
    cin >> sum;
    while ( sum < 100000)
    {
        cout << " ������� ��������� ����� �������. ���������� ��� ���.\n >> ";
        cin >> sum;
    }
    cout << " ������� ���� ������������ (� �������)\n >> ";
    cin >> m;
    while (m < 6)
    {
    	cout << "������� ��������� ����. ���������� ��� ���.\n >> ";
    	cin >> m;
	}
    if (m <= 12 && m > 0)
    {
		cout << "���������� ������ �������� 17.6%.\n";
		st = 17.6;
	}
	else if (m <= 48 && m > 0)
		 {
		     cout << "���������� ������ �������� 20%.\n";
		     st = 20.0;
		 }
		 else if (m > 48)
		 	  {
			      cout << "���������� ������ �������� 23.1%.\n";
				  st = 23.1;
			  }
	st/= 1200;    
    
    An_kredit_po_sum_kred(sum, st, m);
 system("PAUSE");
 return EXIT_SUCCESS;
}
