/*
  ������� �� ����� ��� (�����������) 
*/
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
/*
ezhemes - ����� ������������ �������
stavka - ������� ���������� ������, � ������������� (0,155 = 15,5% / 100%) 
summa - ����� ����� ����� 
months - ���� ��������� � ������� 
*/
void Ipoteka_po_ezhemes(long double ezhemes,double stavka,int months)
{
  long double summa;
  
  summa = ( ezhemes * (pow(stavka + 1, months) - 1) )/ ( stavka * pow(stavka + 1, months) ) ;
  cout<<"��� ����������� ������� "<<ezhemes<<" � ����� ��������� "<<months<<" ������� ����� ����� ������� ������ : "<<summa<<" ������"<<endl;
}


double kstavka(double pr)
/* ������� ���������� ������ � �������������� */
{
  return pr/100;       
}

int main()
{
 setlocale(LC_ALL,"Russian"); 
 double Stavka = 12;
 double Y1=60; //5 ���
 double Y2=120;  //10 ���
 double Y3=240; //20 ���
 
 long double Ezhemes;
 cout<< "������� ����������� ����� : ";
 cin>>Ezhemes;
 
 Ipoteka_po_ezhemes(Ezhemes,kstavka(Stavka)/12, Y1);
 Ipoteka_po_ezhemes(Ezhemes,kstavka(Stavka)/12, Y2);
 Ipoteka_po_ezhemes(Ezhemes,kstavka(Stavka)/12, Y3);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
