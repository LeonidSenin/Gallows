#include <iostream>
#include <string>
#include <Windows.h>
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
	//for (int i = 0; i < strlen(quote); i++)cout << *(quote + i) << endl;
	
	char* otvet = new char[result];
	for (int i = 0; i < result; i++)
	{
		otvet[i] = '_';
	}
	for (int answ = 0; answ < 10;)
	{
		char a;
		cout << "введите-> ";
		cin >> a;
		cout << endl;
		for (int i = 0; i <= result; i++)
		{
			if (quote[i] == a) 
			{//не понимаю почему не фиксится тема с заглавной буквой А(С МАЛЕНЬКОЙ РАБОТАЕТ)
				cout << "В слове эта буква стоит на " << i + 1 << " месте" << endl;
				// тут надо дописать 32 if так чтобы была проверка всех букв алфавита можешь попробовать через switch
				 otvet[i] = a;
				 break;
			}
				if (i == result)
				{
					cout << "нету такой буквы"<< endl;
					answ++;
					postroenie(answ);
					break;
				}
		}
		for (int i = 0; i <= result-1; i++)
		{
			cout << otvet[i] ;
		}
		cout << endl;
	}
	//вставка букввы
	//Нужно добавить в код 1)Чтобы ставилась 1 буква (К_ _...) 2)Чтобы при обходе букв она ставилась в слово 
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
		cout << "вы проиграли " << endl;
		break;

	default:
		cout << "вы проиграли " << endl;
		break;
	}
}