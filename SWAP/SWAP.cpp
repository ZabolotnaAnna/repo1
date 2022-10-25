#include<iostream>
#include<Windows.h>


using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	cout << "** Задача SWAP ** " << endl;
	int A, B;
	cout << "Введіть число А :" << endl;
	cin >> A;
	cout << "Введіть число В :" << endl;
	cin >> B;
	cout << " А=" << A << " B=" << B << endl;
	int t = A; A = B; B = t;
	cout << "Змінені значення A и B :" << endl;
	cout << " А=" << A << " B=" << B << endl;


    return 0;
}