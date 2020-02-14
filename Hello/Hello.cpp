#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
void first(char *quote)
{
	int result=0;
	cout << quote << endl;
	//system("cls");
	cout << "Количество букв в слове:" << strlen(quote) << endl;
	result = strlen(quote);
	//for (int i = 0; i < strlen(quote); i++)cout << *(quote + i) << endl;

	for (int i = 0; i <= result; i++)
	{
		if (quote[i] == 'а'|| quote[i] == 192)//не понимаю почему не фиксится тема с заглавной буквой А(С МАЛЕНЬКОЙ РАБОТАЕТ)
		cout << "В слове эта буква стоит на "<<i+1<<" месте"<< endl;// тут надо дописать 32 if так чтобы была проверка всех букв алфавита можешь попробовать через switch
	}
	//Нужно добавить в код 1)Чтобы ставилась 1 буква (К_ _...) 2)Чтобы при обходе букв она ставилась в слово 
}
void second()
{
	// тут твой код с картинкой
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