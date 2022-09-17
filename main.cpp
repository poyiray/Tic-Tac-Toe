#include "main.h"
void interface()
{
	cout << hint << endl;
	cout << "[ " << first << " ]" << "[ " << second << " ]" << "[ " << third << " ]" << endl;
	cout << "[ " << fourth << " ]" << "[ " << fifth << " ]" << "[ " << sixth << " ]" << endl;
	cout << "[ " << seventh << " ]" << "[ " << eighth << " ]" << "[ " << ninth << " ]" << endl;
}
void reset(int ret)
{
	if (ret == 1 || ret == 2 || ret == 3)
	{
		if (ret == 1)
		{
			system("cls");
			interface();
			cout << "叉子获胜, 点击重开" << endl;
			system("pause");
		}
		else if(ret == 2)
		{
			system("cls");
			interface();
			cout << "圆圈获胜, 点击重开" << endl;
			system("pause");
		}
		else
		{
			system("cls");
			interface();
			cout << "平局, 点击重开" << endl;
			system("pause");
		}
		first = '1';
		second = '2';
		third = '3';
		fourth = '4';
		fifth = '5';
		sixth = '6';
		seventh = '7';
		eighth = '8';
		ninth = '9';

		for (int i = 0; i < 10; i++)
		{
			checkNum[i] = 0;
			player1[i] = 0;
			player2[i] = 0;
		}
		time = 1;
	}
}
int check()
{
	if (player1[1] == 1 && player1[2] == 1 && player1[3] == 1)
	{
		return 1;
	}
	if (player1[4] == 1 && player1[5] == 1 && player1[6] == 1)
	{
		return 1;
	}
	if (player1[7] == 1 && player1[8] == 1 && player1[9] == 1)
	{
		return 1;
	}
	if (player1[1] == 1 && player1[4] == 1 && player1[7] == 1)
	{
		return 1;
	}
	if (player1[2] == 1 && player1[5] == 1 && player1[8] == 1)
	{
		return 1;
	}
	if (player1[3] == 1 && player1[6] == 1 && player1[9] == 1)
	{
		return 1;
	}
	if (player1[1] == 1 && player1[5] == 1 && player1[9] == 1)
	{
		return 1;
	}
	if (player1[3] == 1 && player1[5] == 1 && player1[7] == 1)
	{
		return 1;
	}

	if (player2[1] == 1 && player2[2] == 1 && player2[3] == 1)
	{
		return 2;
	}
	if (player2[4] == 1 && player2[5] == 1 && player2[6] == 1)
	{
		return 2;
	}
	if (player2[7] == 1 && player2[8] == 1 && player2[9] == 1)
	{
		return 2;
	}
	if (player2[1] == 1 && player2[4] == 1 && player2[7] == 1)
	{
		return 2;
	}
	if (player2[2] == 1 && player2[5] == 1 && player2[8] == 1)
	{
		return 2;
	}
	if (player2[3] == 1 && player2[6] == 1 && player2[9] == 1)
	{
		return 2;
	}
	if (player2[1] == 1 && player2[5] == 1 && player2[9] == 1)
	{
		return 2;
	}
	if (player2[3] == 1 && player2[5] == 1 && player2[7] == 1)
	{
		return 2;
	}

	if (time == 10)
	{
		return 3;
	}
}

void moveChess(int keyword) {

	for (int i = 0; i < 9; i++)
	{
		if (checkNum[i] == keyword)
		{
			cout << "请重新选择" << endl;
			system("pause");
			return;
		}
	}
	checkNum[keyword] = keyword;

	//-----------------------圆圈------------------------------
	if (time % 2 == 0)
	{
		if (keyword == 1)
		{
			first = 'o';
			player2[keyword] = 1;
			time++;
			return;
		}
		else if (keyword == 2)
		{
			second = 'o';
			player2[keyword] = 1;
			time++;
			return;
		}
		else if (keyword == 3)
		{
			third = 'o';
			player2[keyword] = 1;
			time++;
			return;
		}
		else if (keyword == 4)
		{
			fourth = 'o';
			player2[keyword] = 1;
			time++;
			return;
		}
		else if (keyword == 5)
		{
			fifth = 'o';
			player2[keyword] = 1;
			time++;
			return;
		}
		else if (keyword == 6)
		{
			sixth = 'o';
			player2[keyword] = 1;
			time++;
			return;
		}
		else if (keyword == 7)
		{
			seventh = 'o';
			player2[keyword] = 1;
			time++;
			return;
		}
		else if (keyword == 8)
		{
			eighth = 'o';
			player2[keyword] = 1;
			time++;
			return;
		}
		else if (keyword == 9)
		{
			ninth = 'o';
			player2[keyword] = 1;
			time++;
			return;
		}
	}
	else
	{
		//--------------------------叉子--------------------------
		if (keyword == 1)
		{
			first = 'x';
			player1[keyword] = 1;
			time++;
			return;
		}
		else if (keyword == 2)
		{
			second = 'x';
			player1[keyword] = 1;
			time++;
			return;
		}
		else if (keyword == 3)
		{
			third = 'x';
			player1[keyword] = 1;
			time++;
			return;
		}
		else if (keyword == 4)
		{
			fourth = 'x';
			player1[keyword] = 1;
			time++;
			return;
		}
		else if (keyword == 5)
		{
			fifth = 'x';
			player1[keyword] = 1;
			time++;
			return;
		}
		else if (keyword == 6)
		{
			sixth = 'x';
			player1[keyword] = 1;
			time++;
			return;
		}
		else if (keyword == 7)
		{
			seventh = 'x';
			player1[keyword] = 1;
			time++;
			return;
		}
		else if (keyword == 8)
		{
			eighth = 'x';
			player1[keyword] = 1;
			time++;
			return;
		}
		else if (keyword == 9)
		{
			ninth = 'x';
			player1[keyword] = 1;
			time++;
			return;
		}
	}
}

int main() {

	while (true)
	{
		interface();
		int keyword = 0;
		cin >> keyword;
		moveChess(keyword);
		int ret = check();
		reset(ret);
		system("cls");
	}
	system("pause");
	return 0;
}