#include<iostream>
#include<Windows.h>


using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	cout << "** Задача GUESS **" << endl;
	int x;
	cout << "Добрий день! Загадайте будь ласка число!" << endl;
	system("pause");
	cout << "Загадане число помножте на 10" << endl;
	system("pause");
	cout << "Потім поділіть на 2" << endl;
	system("pause");
	cout << "Додайте на свое загадане число" << endl;
	system("pause");
	cout << "Потім поділіть на 3" << endl;
	system("pause");
	cout << "Потім додайте 4" << endl;
	system("pause");
	cout << "Потім поділіть на 2" << endl;
	system("pause");
	cout << "Ваш фінальний результат : ";
	cin >> x;
	cout << "Ваше загадане число : " << x - 2;
	return 0;
}