#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	int fix = 0; 
	int arr[5] = { 1, 1, 1, 1, 1 }; //задаём массив
	for (int i = 0; i < 5; i++) //сортировка массива методом пузырька
	{
		for (int j = 0; j < (4 - i); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				fix = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = fix;
			}
		}
	}

	cout << "[ "; //вывод отсортированного массива
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << "]";

	int *newarr = new int[100]; // создали новый массив для недостающих цифр
	int n = 0; //индексы нового массива
	for (int i = 0; i < 4; i++) //определяем недостающие цифры
	{
		int r = arr[i + 1] - arr[i];
		if (r > 1)
			{
				for (int k = 1; k <= (r - 1); k++)
			{
				newarr[n] = arr[i]+k;
				n++;
			}
		}
	}

	cout << "[ "; //выводим новый массив
	for (int i = 0; i < n; i++)
	{
		cout << newarr[i] << ' ';
	}
	cout << "]";

	_getch();
    return 0;
}
