#include <iostream>
using namespace std;

int main()
{
	int secnum{ 0 }, guessnum{ 0 }, i{ 0 }, casenum{ 0 };
	char j{ 0 };
	cin >> secnum;

	for (i = 0; i < 6;)
	{
		if (i == 0)//每当游戏开始时给出玩法
		{
			cout << "Please guess the number between 1 and 10: ";
		}
		cin >> guessnum;
		cout << endl;
		i++;//i用于统计猜数次数
		//判断是否猜对
		if (guessnum == secnum)//猜对了
		{
			//判断猜对所用次数
			casenum = 1 * (i == 1) + 2 * ((2 <= i) && (i <= 3)) + 3 * ((4 <= i) && (i <= 6));
			switch (casenum)
			{
			case 1:cout << "Bingo!\n\n"; break;
			case 2:cout << "Lucky You!\n\n"; break;
			case 3:cout << "Good Guess!\n\n"; break;
			}
		}
		else//猜错了
		{
			//根据猜错次数输出不同内容
			if (i <= 5)//猜错五次以内
			{
				//给出大小提示
				if (guessnum > secnum)
				{
					cout << "Too big.\nTry again:";
				}
				else
				{
					cout << "Too small.\nTry again:";
				}
			}
			else//猜错六次
			{
				cout << "Game Over\n";
			}
		}
		//判断一轮游戏是否结束
		if ((guessnum == secnum) || (i >= 6))
		{
			//询问是否再次游戏
			cout << "Do you wanna play again? If yes, press Y or y. Otherwise press N or n.\n";
			cin >> j;
			cout << endl;
			if ((j == 'y') || j == 'Y')
			{
				i = 0;//重置i，游戏再次开始
			}
			else
			{
				break;//跳出for循环，游戏结束
			}
		}
	}
	return 0;
}