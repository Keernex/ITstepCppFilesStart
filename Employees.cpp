#include "Employees.h"

void Employees::input_employees(int index)
{
	cout << endl;
	cout << "Employee " << index+1 << endl;
	cout << "Input name: ";
	cin >> name;
	cout << "Input surname: ";
	cin >> surname;
	cout << "Input age: ";
	cin >> age;
}

void Employees::print_employees(int index)
{
	cout << endl;
	cout << "Employee " << index + 1 << endl;
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Age: " << age << endl;
}
