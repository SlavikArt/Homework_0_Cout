﻿#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(0, "rus");
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(console, 3);
	cout << " ------------------------------------ \n";
	cout << " |           Апрель 2022            | \n";
	cout << " ------------------------------------ \n";
	cout << " | Пн | Вт | Ср | Чт | Пт | Сб | Вс | \n";
	cout << " ------------------------------------ \n";
	cout << " | 28 | 29 | 30 | 31 |  1 |  2 |  3 | \n";
	cout << " ------------------------------------ \n";
	cout << " |  4 |  5 |  6 |  7 |  8 |  9 | 10 | \n";
	SetConsoleTextAttribute(console, 14);
	cout << " ------------------------------------ \n";
	cout << " | 11 | 12 | 13 | 14 | 15 | 16 | 17 | \n";
	cout << " ------------------------------------ \n";
	cout << " | 18 | 19 | 20 | 21 | 22 | 23 | 24 | \n";
	cout << " ------------------------------------ \n";
	cout << " | 25 | 26 | 27 | 28 | 29 | 30 |  1 | \n";
	cout << " ------------------------------------ \n";
	cout << " |  2 |  3 |  4 |  5 |  6 |  7 |  8 | \n";
	cout << " ------------------------------------ \n";
	SetConsoleTextAttribute(console, 8);
}