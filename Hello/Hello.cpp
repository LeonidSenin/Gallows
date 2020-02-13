#include <iostream>
using namespace std;

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
		cout << " " << endl;
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
		break;
	
	default:
		break;
	}
}

int main()
{
	
	for (int answ = 0; answ < 11; answ++) {
		postroenie(answ);
	}

/*
	_______________
     | /        !
	 |/         @ 
     |         \|/
     |	        | 
	 |         / \
     |
	 |
	_|_________________
	*/
}
