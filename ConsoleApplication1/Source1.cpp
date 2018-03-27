#include<iostream>
#include<time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct date {
	int day;
	int month;
	int year;
};

void  ginerateDate(date * date )
{
	date->day = 1 + rand() % 30;
	date->month = 1 + rand() % 12;
	date->year = 1950 + rand() % 60;
}
void ginerateName(char * name, int len)
{
	for (int i = 0;i < len-1;i++)
	{
		*(name) = (char)(192 + rand() % 62);
		name++;
	}
	*(name) = '\0';
}