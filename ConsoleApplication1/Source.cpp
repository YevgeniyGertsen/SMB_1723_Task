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
	//общий средний бал
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

		//средний бал - 1 —“”ƒ≈Ќ“ј
		int sum = 0;
		for (int j = 0;j < 5; j++)
		{
			(students + i)->ses[j] = 2 + rand() % 3;
			sum += (students + i)->ses[j];
		}
		(students + i)->sr = sum / 5;

		totalSum += sum / 5;
	}

	//общий средний бал - ¬—≈’ студентов
	totalSum = totalSum / count;

	sort(students, count);

	cout << endl << "-----------------------------------------------------------" << endl;
	cout << endl << "ќбщий средний бал = "<< totalSum << endl;
	cout << endl << "-----------------------------------------------------------" << endl;

	for (int i = 0;i < count;i++)
	{
		//средний бал которых превышает общий средний бал
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

	/*2.	ќписать структуру с именем STUDENT, содержащую пол€ :
	a.Name Ц фамили€ и инициалы
		b.Kurs Ц курс
		c.SES Ц успеваемость(массив из п€ти элементов).

		Ќаписать программу, выполн€ющую :
		Х	ввод с клавиатуры данных в массив STUD, состо€щий из 10 структур типа STUDENT, записи должны быть упор€дочены по алфавиту;
	Х	вывод на экран записей, упор€доченного списка студентов,
	средний бал которых превышает общий средний бал;
	Х	если таких студентов нет Ц выдать сообщение*/

























	/*int gr;
	cout << "¬ведите кол-во студентов";
	cin >> gr;
	group *gr5 = new group[gr];
	if (gr5 == NULL)
	{
		cout << "пам€ть не выделена";
		system("exit");
	}
	else {
		for (int i = 0;i < gr;i++)
		{
			(gr5 + i)->name = new char[30];
			cout << "¬ведите им€: ";
			cin >> (gr5 + i)->name;

			(gr5 + i)->date = new date[1];
			cout << "¬ведите день рождени€: ";
			cin >> (gr5 + i)->date->day;
			cout << "¬ведите мес€ц: ";
			cin >> (gr5 + i)->date->month;
			cout << "¬ведите год рождени€: ";
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
	/*1.	ќписать структуру с именем GROUP, содержащую пол€:
a.	Name Ц фамили€ и инициалы
b.	DAT Ц дата рождени€ (год, мес€ц, число)
c.	SES Ц успеваемость (массив из трех элементов).
*/
//Х	ввод с клавиатуры данных в массив GR5, 

//состо€щий из 10 структур типа GROUP;
//вывод на экран записей, упор€доченных по возрастанию пол€ SES;
}