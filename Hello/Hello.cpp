#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
using namespace std;
void postroenie(int answ);
void first(char *quote)
{
	int answ;
	int result=0;
	cout << quote << endl;
	//system("cls");
	cout << "Количество букв в слове:" << strlen(quote) << endl;
	result = strlen(quote);
	//for (int i = 0; i < strlen(quote); i++)cout <<
	//*(quote + i) << endl;
	
	char* otvet = new char[result];
	for (int i = 0; i < result; i++)
	{
		otvet[i] = '_';
	}
	int pobeda = 0;
	for (int answ = 0; answ < 10;)
	{
		int povtor = 0;
		char a;

		if ( pobeda == result)
			{
				cout << "вы молодец!!";
				exit(0);
				//break;
			}

		cout << "введите-> ";
		cin >> a;
		cout << endl;
		
		for (int i = 0; i <= result; i++)
		{
			if (quote[i] == a) 
			{//не понимаю почему не фиксится тема с 
			 //заглавной буквой А(С МАЛЕНЬКОЙ РАБОТАЕТ)
				cout << "В слове эта буква стоит на " <<
				i + 1 << " месте" << endl;
				otvet[i] = a;
				povtor++;
				pobeda++;

			}

			else 
			{
				if (i == result && povtor!=0)
				{
					break;
				}
				else if (povtor==0 && i==result)
				{
				cout << "нету такой буквы" << endl;
				answ++;
				postroenie(answ);
				break;
				}
		
			}

			

		}
		for (int i = 0; i <= result-1; i++)
		{
			cout << otvet[i] ;
		}
		cout << endl;
	}
	
	delete[] otvet;
}
int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251); 
	char quote[128] = "";
	cout << "Напишите слово:";
	cin >> quote;
	first(quote);
	
	system("pause");
	return 0;
}
void postroenie(int answ)
{
	switch (answ)
	{
	case 1:
		cout << " " << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		break;
	case 2:
		cout << " "  << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << "_|___" << endl;
		break;
	case 3:
		cout << "___________________" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << "_|___" << endl;
		break;
	case 4:
		cout << "________________" << endl;
		cout << " |            |  " << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << "_|___" << endl;
		break;
	case 5:
		cout << "________________" << endl;
		cout << " |            |  " << endl;
		cout << " |            @" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << "_|___" << endl;
		break;
	case 6:
		cout << "________________ " << endl;
		cout << " |            |   " << endl;
		cout << " |            @   " << endl;
		cout << " |            |   " << endl;
		cout << " |            |    " << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << "_|___" << endl;
		break;
	case 7:
		cout << "________________ " << endl;
		cout << " |            |   " << endl;
		cout << " |            @   " << endl;
		cout << " |            |>   " << endl;
		cout << " |            |    " << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << "_|___" << endl;
		break;
	case 8:
		cout << "________________ " << endl;
		cout << " |            |   " << endl;
		cout << " |            @   " << endl;
		cout << " |           <|>   " << endl;
		cout << " |            |    " << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << "_|___" << endl;
		break;
	case 9:
		cout << "________________ " << endl;
		cout << " |            |   " << endl;
		cout << " |            @   " << endl;
		cout << " |           <|>   " << endl;
		cout << " |            |    " << endl;
		cout << " |             )   " << endl;
		cout << " |" << endl;
		cout << "_|___" << endl;
		break;
	case 10:
		cout << "________________ " << endl;
		cout << " |            |   " << endl;
		cout << " |            @   " << endl;
		cout << " |           <|>    "; cout << endl;
		cout << " |            |    " << endl;
		cout << " |           ( )   " << endl;
		cout << " |" << endl;
		cout << "_|___" << endl;
		cout << "Вы проиграли " << endl;
		break;

	default:
		cout << "ERROR " << endl;
		break;
	}
}