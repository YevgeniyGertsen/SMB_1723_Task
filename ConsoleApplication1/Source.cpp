#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include"Header.h"
#include <Windows.h>
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

using namespace std;

enum kurs {
	kurs1, kurs2, kurs3
};
struct student {
	int id;
	char* name;
	date * date;
	int * ses;
	kurs nameKurs;
	double sr;
};
void sort(student* studen, int count)
{

	for (int i = 0;i < count; i++)
	{
		student temp;
		for (int j = (count - 1);j > i;j--)
		{
			if (studen[j].id < studen[j - 1].id)
			{
				temp = studen[j];
				studen[j] = studen[j - 1];
				studen[j - 1] = temp;
			}
		}
	}

}
void main()
{
	setlocale(0, "");
	srand(time(NULL));
	int count = 1 + rand() % 100;
	student * students = new student[count];
	//����� ������� ���
	double totalSum = 0;
	for (int i = 0;i < count;i++)
	{
		(students + i)->date = new date[1];
		ginerateDate((students + i)->date);

		(students + i)->name = new char[10];
		ginerateName((students + i)->name, 10);

		(students + i)->nameKurs = (kurs)(0 + rand() % 3);
		(students + i)->id = 1 + rand() % 999;

		(students + i)->ses = new int[5];

		//������� ��� - 1 ��������
		int sum = 0;
		for (int j = 0;j < 5; j++)
		{
			(students + i)->ses[j] = 2 + rand() % 3;
			sum += (students + i)->ses[j];
		}
		(students + i)->sr = sum / 5;

		totalSum += sum / 5;
	}

	//����� ������� ��� - ���� ���������
	totalSum = totalSum / count;

	sort(students, count);

	cout << endl << "-----------------------------------------------------------" << endl;
	cout << endl << "����� ������� ��� = "<< totalSum << endl;
	cout << endl << "-----------------------------------------------------------" << endl;

	for (int i = 0;i < count;i++)
	{
		//������� ��� ������� ��������� ����� ������� ���
		if ((students + i)->sr > totalSum)
		{
			SetConsoleTextAttribute(hConsole, 12);
			cout << "#" << (students + i)->id << ". "
				<< (students + i)->name << " \t"
				<< (students + i)->nameKurs << " \t"
				<< (students + i)->sr << " \t"
				<< (students + i)->date->year << endl;
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 15);
			cout << "#" << (students + i)->id << ". "
				<< (students + i)->name << " \t"
				<< (students + i)->nameKurs << " \t"
				<< (students + i)->sr << " \t"
				<< (students + i)->date->year << endl;
		}
	}
	SetConsoleTextAttribute(hConsole, 15);
	cout << endl << "-----------------------------------------------------------" << endl;

	/*2.	������� ��������� � ������ STUDENT, ���������� ���� :
	a.Name � ������� � ��������
		b.Kurs � ����
		c.SES � ������������(������ �� ���� ���������).

		�������� ���������, ����������� :
		�	���� � ���������� ������ � ������ STUD, ��������� �� 10 �������� ���� STUDENT, ������ ������ ���� ����������� �� ��������;
	�	����� �� ����� �������, �������������� ������ ���������,
	������� ��� ������� ��������� ����� ������� ���;
	�	���� ����� ��������� ��� � ������ ���������*/

























	/*int gr;
	cout << "������� ���-�� ���������";
	cin >> gr;
	group *gr5 = new group[gr];
	if (gr5 == NULL)
	{
		cout << "������ �� ��������";
		system("exit");
	}
	else {
		for (int i = 0;i < gr;i++)
		{
			(gr5 + i)->name = new char[30];
			cout << "������� ���: ";
			cin >> (gr5 + i)->name;

			(gr5 + i)->date = new date[1];
			cout << "������� ���� ��������: ";
			cin >> (gr5 + i)->date->day;
			cout << "������� �����: ";
			cin >> (gr5 + i)->date->month;
			cout << "������� ��� ��������: ";
			cin >> (gr5 + i)->date->year;

			(gr5 + i)->ses = new int[10];

			if ((gr5 + i)->ses != NULL)
			{
				int sum = 0;
				for (int j = 0; j < 10; j++)
				{
					(gr5 + i)->ses[j] = 2+rand()%3;
					sum += (gr5 + i)->ses[j];
				}
				(gr5 + i)->sr = sum / 10;
			}
		}


		system("cls");
		for (int i = 0;i < gr;i++)
		{

			printf("#%d. %s %d (%2.2lf) \n",
				(i + 1), (gr5 + i)->name, (gr5 + i)->date->year, (gr5 + i)->sr);
		}

	}*/
	/*1.	������� ��������� � ������ GROUP, ���������� ����:
a.	Name � ������� � ��������
b.	DAT � ���� �������� (���, �����, �����)
c.	SES � ������������ (������ �� ���� ���������).
*/
//�	���� � ���������� ������ � ������ GR5, 

//��������� �� 10 �������� ���� GROUP;
//����� �� ����� �������, ������������� �� ����������� ���� SES;
}