#include <iostream>
using namespace std;

int main()
{
	int secnum{ 0 }, guessnum{ 0 }, i{ 0 }, casenum{ 0 };
	char j{ 0 };
	cin >> secnum;

	for (i = 0; i < 6;)
	{
		if (i == 0)//ÿ����Ϸ��ʼʱ�����淨
		{
			cout << "Please guess the number between 1 and 10: ";
		}
		cin >> guessnum;
		cout << endl;
		i++;//i����ͳ�Ʋ�������
		//�ж��Ƿ�¶�
		if (guessnum == secnum)//�¶���
		{
			//�жϲ¶����ô���
			casenum = 1 * (i == 1) + 2 * ((2 <= i) && (i <= 3)) + 3 * ((4 <= i) && (i <= 6));
			switch (casenum)
			{
			case 1:cout << "Bingo!\n\n"; break;
			case 2:cout << "Lucky You!\n\n"; break;
			case 3:cout << "Good Guess!\n\n"; break;
			}
		}
		else//�´���
		{
			//���ݲ´���������ͬ����
			if (i <= 5)//�´��������
			{
				//������С��ʾ
				if (guessnum > secnum)
				{
					cout << "Too big.\nTry again:";
				}
				else
				{
					cout << "Too small.\nTry again:";
				}
			}
			else//�´�����
			{
				cout << "Game Over\n";
			}
		}
		//�ж�һ����Ϸ�Ƿ����
		if ((guessnum == secnum) || (i >= 6))
		{
			//ѯ���Ƿ��ٴ���Ϸ
			cout << "Do you wanna play again? If yes, press Y or y. Otherwise press N or n.\n";
			cin >> j;
			cout << endl;
			if ((j == 'y') || j == 'Y')
			{
				i = 0;//����i����Ϸ�ٴο�ʼ
			}
			else
			{
				break;//����forѭ������Ϸ����
			}
		}
	}
	return 0;
}