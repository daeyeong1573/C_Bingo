#include "Bingo.h"

int get(int gets)

{
	int num;
	int x, retry;
	int count = 25;
	do {
		retry = 0;
		if (gets == 0)
		{
			printf(">>1~25 ������ ���ڸ� �Է��ϼ���: ");
			scanf("%d", &num);
			if (num < 1 || num>25)
			{
				retry = 1;
			}
		}
		else
		{
			num = rand() % 25 + 1;
		}
		if (retry == 0)
		{
			for (x = 0; x < count; x++)
			{
				if (ch[x] == num)
				{
					retry = 1;
					break;
				}
			}
		}
	} while (retry == 1);

	ch[count++] = num;
	if (gets == 0)
	{
		printf(">�÷��̾ '%d'�� �����߽��ϴ�.\n", num);
	}
	else
	{
		printf(">��ǻ�Ͱ� '%d'�� �����߽��ϴ�.\n\n", num);
	}
	return num;
}

int get2(int gets)

{
	int num;
	int x, retry;
	int count = 9;
	do {
		retry = 0;
		if (gets == 0)
		{
			printf(">>1~9 ������ ���ڸ� �Է��ϼ���: ");
			scanf("%d", &num);
			if (num < 1 || num>9)
			{
				retry = 1;
			}
		}
		else
		{
			num = rand() % 9 + 1;
		}
		if (retry == 0)
		{
			for (x = 0; x < count; x++)
			{
				if (ch2[x] == num)
				{
					retry = 1;
					break;
				}
			}
		}
	} while (retry == 1);

	ch2[count++] = num;
	if (gets == 0)
	{
		printf(">�÷��̾ '%d'�� �����߽��ϴ�.\n", num);
	}
	else
	{
		printf(">��ǻ�Ͱ� '%d'�� �����߽��ϴ�.\n\n", num);
	}
	return num;
}