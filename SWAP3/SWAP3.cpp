#include<iostream>
#include<Windows.h>


using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	cout << "** Задача SWAP3 **" << endl;
	int A, B, C;
	cout << "Введіть число А :" << endl;
	cin >> A;
	cout << "Введіть число В :" << endl;
	cin >> B;
	cout << "Введіть число C :" << endl;
	cin >> C;
	cout << " A=" << A << " B=" << B << " C=" << C << endl;
	int k = B; B = A;  A = C; C = k;
	cout << "Змінені значення B=A C=B A=C" << endl;
	cout << " B=" << B << " A=" << A << " C=" << C << endl;


    return 0;
}