// Scrooge.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx2.h"
#include "stdafx.h"
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int otv;
	cout << "����� �������� �� ������ ���������?\n";
	cout << "1. ��������� ����������� ������ �� ������.\n";
	cout << "2. ��������� ������������ ����� �������.\n";
	cin >> otv;

	switch (otv)
	{
	case 1:
	{
		int otv;
		cout << "��������� ������ � ������:\n";
		cout << "1. ����������� ������������� ���������.\n";
		cout << "2. �������������� ������������� ���������.\n";
		cin >> otv;

		switch (otv)
		{
		case 1:
		{
			int T;
			cout << "������� ���� ���������� ������ � �������: ";
			cin >> T;
			cout << endl;

			float pr_stavka;
			cout << "������� ������� ������ � ��������� ";
			cin >> pr_stavka;
			cout << endl;

			float ef_stavka;
			ef_stavka = raschet_stavki_po_vkladu_ezhemes(T, pr_stavka / 100);
			cout << "����������� ������ �� ������ ������ �� " << T << " ������� ����� " << ef_stavka << endl;

			break;
		}

		case 2:
		{
			float pr_stavka;
			cout << "������� ������� ������ � ��������� ";
			cin >> pr_stavka;
			cout << endl;

			float ef_stavka;
			ef_stavka = raschet_stavki_po_vkladu_ezhekvar(pr_stavka / 100);
			cout << "����������� ������ �� ������ ����� " << ef_stavka << endl;
			break;
		}

		default:
		{
			cout << "������ �����\n";
			break;
		}
		}
	}
	}






	system("PAUSE");
	return;
}

