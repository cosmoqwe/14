#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
void input(char**& arr)
{
	string buf;
	for (size_t i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
		{
			
			cout << "������� ������� --> " << endl;
		}
		else
		{
			cout << "������� ��� --> " << endl;
			
		}
		getline(cin, buf);
		arr[i] = new char[buf.size()];
		strcpy(arr[i], buf.c_str());
		buf.clear();
	}
}
void vivod(char**& arr)
{
	string buf;
	for (size_t i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
		{

			cout << arr[i] << " - ";
		}
		else
		{
			cout << arr[i] << endl << endl;
		}
	}
}
void poisk(char**& arr)
{
	cout << "�������  ��� --> " << endl;
	cin.ignore();
	string buf;
	getline(cin, buf);
	for (size_t i = 0; i < 6; i++)
	{
		if (i % 2 != 0)
		{
			if (strcmp(arr[i], buf.c_str()) == 0)
			{
				cout << "����� ����� ������������ --> " << endl;
				cout << arr[i - 1] << endl;
			}
		}
	}


}
void poisk2(char**& arr)
{
	cout << "�������  ����� --> " << endl;
	cin.ignore();
	string buf;
	getline(cin, buf);
	for (size_t i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
		{
			if (strcmp(arr[i], buf.c_str()) == 0)
			{
				cout << "��� ����� ������������ --> " << endl;
				cout << arr[i + 1] << endl;
			}
		}
	}


}

void main()
{
	setlocale(0, "");
    char** arr = new char* [6];
	input(arr);
	vivod(arr);
	int choice;
	cout << "��� �� ������ �������?" << endl;
	cout << "1-������� �� ����� ����� � ��� ������������ " << endl;
	cout << "2-����� �� �����" << endl;
	cout << "3- ����� �� ������ " << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "���� ������������ --> " << endl;
		vivod(arr);
		break;
	}
	case 2:
	{
		poisk(arr);
		break;
	}
	case 3:
	{
		poisk2(arr);
		break;

	}
	}


}



