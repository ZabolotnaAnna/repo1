#include<iostream>
#include<Windows.h>


using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	cout << " ** Задача PARROT **" << endl;
	char text[200];
	cout << "Введіть  з клавіатури один рядок довільного тексту, до 200 символів(з урахуванням відступів): ";
	cin.getline(text, 200);
	cout << "Текст: " << text << endl;

    return 0;
}