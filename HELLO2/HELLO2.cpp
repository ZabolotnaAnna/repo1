#include<iostream>
#include<Windows.h>


using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "** Задача HELLO2 **" << endl;
	char name[30];
	cout << "Як вас звати? ";	cin.getline(name, 30);
	cout << "Доброго дня, ";
	cout << name;
	cout << "!";
	cout << endl;


	return 0;
}
