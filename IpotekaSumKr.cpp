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
 	cout << " ����� �������: " << sum << "���.\n ���� ������������: "<< months << " ���.\n ����������� ������: " << ezh << " ���.\n ��������� �� �������: " << per << " ���.\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    long long  sum;    // ����� �������, ������� ����� ����� ������
    double st;             	 // ���������� ������
    int m;             		 // �����, �� ������� ����� �������������� ������ (� �������)
    cout << " ������� ��������� ������������ (�� ����� ����� ����� ����� �������).\n ����������� �������� -  1 000 000 ������.\n >> ";
    cin >> sum;
    while ( sum < 1000000)
    {
        cout << " ������� ��������� ����� �������. ���������� ��� ���.\n >> ";
        cin >> sum;
    }
    if (sum < 4000000)
    {
        cout << " ���������� ������ ���������� 20% �������.\n";
        st = 20.0;
	}
    else if (sum < 10000000)
         {
            cout << " ���������� ������ ���������� 17,5% �������.\n";
            st = 17.5;
         }
         else if (sum >= 10000000)
              {
                cout << " ���������� ������ ���������� 13,5% �������.\n";
                st = 13.5;
              }                  
    st/= 1200;
    cout << " ������� ���� ������������ (� �������)\n>> ";
    cin >> m;
    
    Ipoteka_po_sum_kred(sum, st, m);
 system("PAUSE");
 return EXIT_SUCCESS;
}
