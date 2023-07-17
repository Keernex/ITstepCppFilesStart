#include <conio.h>
#include "FileProviderEmployees.h"
void main()
{
	FileProviderEmployees fileProviderEmployees;
	Employees employees_funk;
	vector<Employees> employees;
	int count = 0;
	fileProviderEmployees.load_employee(count, employees);
	do
	{
		system("cls");
		cout << "Employees manager: " << endl;
		cout << "1. Add employees" << endl;
		cout << "2. Print employees" << endl;
		cout << "3. Redaction employee index" << endl;
		cout << "4. Search employee surname" << endl;
		cout << "5. Search employee age" << endl;
		cout << "6. Delete employee" << endl;
		cout << "7. Exit" << endl;
		int menu;
		cout << "Enter menu: ";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			if (employees.size() == 0)
			{
				cout << "Enter count: ";
				cin >> count;
				employees.resize(count);
				for (int i = 0; i < count; i++)
				{
					employees[i].input_employees(i);
				}
			}
			else
			{
				cout << "How many employees do you want to add?" << endl;
				cout << "Enter count: ";
				int new_count;
				cin >> new_count;
				employees.resize(count + new_count);
				for (int i = count; i < count + new_count; i++)
				{
					employees[i].input_employees(i);
				}count = count + new_count;
			}
		}break;
		case 2:
		{
			for (int i = 0; i < count; i++)
			{
				employees[i].print_employees(i);
			}
		}break;
		case 3:
		{
			cout << "Write the number of the employee you want to edit: ";
			int index;
			cin >> index;
			if (index < count && index >= 0)
			{
				employees = employees_funk.redaction_employee_index(index,employees);
			}
			else 
			{
				cout << "Error index" << endl;
			}
		}break;
		case 4:
		{
			cout << "Enter the surname of the employee you want to see: ";
			string surname;
			cin >> surname;
			if (count != 0)
			{
				employees_funk.search_employee_surname(surname, employees);
			}
			else
			{
				cout << "Error surname" << endl;
			}
		}break;
		case 5:
		{
			cout << "Enter the age of the employee you want to see: ";
			int age;
			cin >> age;
			if (count != 0)
			{
				employees_funk.search_employee_age(age, employees);
			}
			else
			{
				cout << "Error age" << endl;
			}
		}break;
		case 6:
		{
			cout << "Delete an employee by index: ";
			int index;
			cin >> index;
			if (count != 0)
			{
				employees_funk.remove_employee(index, employees);
				count--;
				cout << "Remove employee" << endl;
			}
			else
			{
				cout << "Error index" << endl;
			}
		}break;
		case 7:
		{
			fileProviderEmployees.save_employee(employees);
			exit(0);
		}break;
		}
		_getch();
	} while (true);
}