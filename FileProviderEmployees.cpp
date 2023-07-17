#include "FileProviderEmployees.h"

vector<Employees> FileProviderEmployees::redaction_employee_index(int index, vector<Employees> employees)
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
void FileProviderEmployees::search_employee_surname(string surname, vector<Employees> employees)
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


void FileProviderEmployees::search_employee_age(int age, vector<Employees> employees)
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

vector<Employees> FileProviderEmployees::remove_employee(int index, vector<Employees> employees)
{
    if (index >= 0 && index < employees.size()) 
    {
        employees.erase(employees.begin() + index);
    }
    return employees;
}