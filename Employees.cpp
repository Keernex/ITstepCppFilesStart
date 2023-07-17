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

vector<Employees> Employees::redaction_employee_index(int index, vector<Employees> employees)
{
    cout << endl;
    cout << "Employee " << index + 1 << endl;
    cout << "Enter new name: ";
    cin >> employees[index].name;
    cout << "Enter new surname: ";
    cin >> employees[index].surname;
    cout << "Enter new age: ";
    cin >> employees[index].age;
    return employees;
}

void Employees::print_employees(int index)
{
	cout << endl;
	cout << "Employee " << index + 1 << endl;
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Age: " << age << endl;
}

void Employees::search_employee_surname(string surname, vector<Employees> employees)
{
    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i].surname == surname)
        {
            cout << endl;
            cout << "Employee " << i + 1 << endl;
            cout << "Name: " << employees[i].name << endl;
            cout << "Surname: " << employees[i].surname << endl;
            cout << "Age: " << employees[i].age << endl;
        }
    }
}


void Employees::search_employee_age(int age, vector<Employees> employees)
{
    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i].age == age)
        {
            cout << endl;
            cout << "Employee " << i + 1 << endl;
            cout << "Name: " << employees[i].name << endl;
            cout << "Surname: " << employees[i].surname << endl;
            cout << "Age: " << employees[i].age << endl;
        }
    }
}

vector<Employees> Employees::remove_employee(int index, vector<Employees> employees)
{
    if (index >= 0 && index < employees.size())
    {
        employees.erase(employees.begin() + index);
    }
    return employees;
}