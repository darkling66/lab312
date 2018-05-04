// дфи32.cpp : Defines the entry point for the console application.
//

Отключить для языка : английский
#include "stdafx.h"
#include "stdlib.h"
#define N 4
#define M 4

int main()
{
	int number[10];
	for (int i = 0; i < 10; i++)
	{
		number[i] = 0;
	}
	int arr[N][M] = {
		{ 12, 43, 54, 87 },
		{ 26, 65, 40, 31 },
		{ 10, 45, 67, 12 },
		{ 95, 15, 57, 32 }
	};
	printf("Array:\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			int copy = arr[i][j];
			do
			{
				number[copy % 10]++;
				copy /= 10;
			} while (copy);
		}
	}
	printf("Count of numbers:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d: %d\n", i, number[i]);
	}
	system("pause");
	return 0;
}