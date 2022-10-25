#include<iostream>
#include<Windows.h>


using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	cout << "** Задача HELLO3 **" << endl;
	char name[100];
	int year;
	cout << "Як Вас звуть?";   cin.getline(name, 100);
	cout << "Скільки Вам років?";   cin >> year;
	char study_place[200];
	cout << "Де Ви навчаєтеся?";
	cin.ignore();
	cin.getline(study_place, 200);
    cout << "Доброго дня, ";
	cout << name;
	cout << "!";
	cout << endl;
	cout << "Вітаємо Вас, Вам усього  " << year << ", а Ви вже ведете діалог з комп’ютером!" << endl;
	cout << study_place << " буде пишатися Вами!\n" << endl;


    return 0;
}