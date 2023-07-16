#include "Employees.h"


void Employees::print()
{
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Age: " << age << endl;
}

void Employees::read()
{
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter surname: ";
	cin >> surname;
	cout << "Enter age: ";
	cin >> age;
}