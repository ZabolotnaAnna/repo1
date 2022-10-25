#include<iostream>
#include<Windows.h>



using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	cout << "** Задача ANKETA **" << endl;
	char lastname[200];
	cout << "        Прізвище? : "; cin.getline(lastname, 200);
	char name[200];
	cout << "       Ваше ім'я? : "; cin.getline(name, 200);
	char middlename[200];
	cout << "     По батькові? : "; cin.getline(middlename, 200);
	char gender[200];
	cout << "           Стать? : "; cin.getline(gender, 200);
	char data[100];
	cout << " Дата народження? : "; cin.getline(data, 100);
	char adres[200];
	cout << "           Адрес? : "; cin.getline(adres, 200);
	char phnumber[100];
	cout << "  Номер телефону? : "; cin.getline(phnumber, 100);
	char study[200];
	cout << "  Місце навчання? : "; cin.getline(study, 200);
	char group[200];
	cout << "           Група? : "; cin.getline(group, 200);
    char hobby[200];
	cout << "           Хоббі? : "; cin.getline(hobby, 200);
	

	cout << "** ANKETA **" << endl;
	cout << "Прізвище : " << lastname << "            Ім'я : " << name << "            По батькові : " << middlename << endl;
	cout << "Номер телефона : " << phnumber << "                         Хоббі : " << hobby << endl;
	cout << "Місце навчання : " << study << "              Група : " << group << endl;
	cout << "Дата народження  : " << data << "                          Стать : " << gender << endl;
	cout << "Адреса : " << adres;
	cout << endl;

    return 0;
} 