#include<iostream>
#include<Windows.h>


using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	cout << "** Задача SWAP4 **" << endl;
	int A, B, C, D;
	cout << "Введіть число А :" << endl;
	cin >> A;
	cout << "Введіть число В :" << endl;
	cin >> B;
	cout << "Введіть число C :" << endl;
	cin >> C;
	cout << "Введіть число D :" << endl;
	cin >> D;
	cout << " А=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
	int p = B; B = A; A = D;  D = C; C = p;
	cout << "Змінені значення B=A C=B D=C A=D " << endl;
	cout << " А=" << A << " B=" << B << " C=" << C << " D=" << D << endl;


    return 0;
}