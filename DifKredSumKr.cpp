#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

void Dif_kredit_po_sum(long long sum,double stavka,int months)
{
 	long double ezh, sezh = 0.0, proc;
	long long  per = 0.0;
 	cout << " ����� �������: " << sum << "���.\n ���� ������������: "<< months << " ���.\n";
 	ezh = sum / months;
	for (int i = 1; i <= months; i++)
	{
		proc = ((sum - (i - 1)*(sum / months)) * stavka / 12);
		cout << " ����������� ����� �� " << i << " �����: " << (ezh + proc) << " ���.\n";
		sezh += ezh + proc;
	}
  	per = sezh - sum;
	cout << " ��������� �� �������: " << per << " ���.\n";
}



int main()
{
    setlocale(LC_ALL, "Russian");
    long long  sum;     // ����� �������, ������� ����� ����� ������
    double st;          // ���������� ������
    int m;              // �����, �� ������� ����� �������������� ������ (� �������)
    cout << " ������� ����� �������.\n >> ";
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
		cout << "���������� ������ �������� 13.9%.\n";
		st = 13.9;
	}
	else if (m <= 48 && m > 0)
		 {
		     cout << "���������� ������ �������� 18%.\n";
		     st = 18.0;
		 }
		 else if (m > 48)
		 	  {
			      cout << "���������� ������ �������� 22.5%.\n";
				  st = 22.5;
			  }
	st/= 100;    
    Dif_kredit_po_sum(sum, st, m);
 system("PAUSE");
 return EXIT_SUCCESS;
}
