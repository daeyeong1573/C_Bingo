#include "Bingo.h"

int out(int arr[5][5])
{
	int x, y, sum, cnt = 0;
	if (cnt == 3)
		return 1;
	for (y = 0; y < SIZE3; y++)//������ Ȯ��
	{
		sum = 0;
		for (x = 0; x < SIZE3; x++)
		{
			sum += arr[y][x];
		}
		if (sum == 0)
		{
			cnt++;
		}
	}
	for (x = 0; x < SIZE3; x++)//������ Ȯ��
	{
		sum = 0;
		for (y = 0; y < SIZE3; y++)
		{
			sum += arr[y][x];
		}
		if (sum == 0)
		{
			cnt++;
		}
	}
	sum = 0;
	for (x = 0; x < SIZE3; x++)//�밢�� Ȯ�� 
	{
		sum += arr[x][x];
	}
	if (sum == 0)
	{
		cnt++;
	}
	sum = 0;
	for (x = 0; x < SIZE3; x++)
	{
		sum += arr[x][SIZE3 - x - 1];
	}
	if (sum == 0)
	{
		cnt++;
	}
	if (cnt == 3)
		return 1;
	return 0;
}

int out2(int arr[3][3])
{
	int x, y, sum, cnt = 0;
	if (cnt == 3)
		return 1;
	for (y = 0; y < SIZE; y++)//������ Ȯ��
	{
		sum = 0;
		for (x = 0; x < SIZE; x++)
		{
			sum += arr[y][x];
		}
		if (sum == 0)
		{
			cnt++;
		}
	}
	for (x = 0; x < SIZE; x++)//������ Ȯ��
	{
		sum = 0;
		for (y = 0; y < SIZE; y++)
		{
			sum += arr[y][x];
		}
		if (sum == 0)
		{
			cnt++;
		}
	}
	sum = 0;
	for (x = 0; x < SIZE; x++)//�밢�� Ȯ�� 
	{
		sum += arr[x][x];
	}
	if (sum == 0)
	{
		cnt++;
	}
	sum = 0;
	for (x = 0; x < SIZE; x++)
	{
		sum += arr[x][SIZE - x - 1];
	}
	if (sum == 0)
	{
		cnt++;
	}
	if (cnt == 3)
		return 1;
	return 0;
}