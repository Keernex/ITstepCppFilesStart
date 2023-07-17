#include <conio.h>
#include "FileProviderForEmployees.h"
void main()
{
	FileProviderForEmployees fileProviderForEmployees;
	vector<Employees> employees;
	int count = 0;
	do
	{
		system("cls");
		cout << "Employees manager: " << endl;
		cout << "1. Add employees" << endl;
		cout << "2. Print employees" << endl;
		cout << "3. Redaction employee index" << endl;
		cout << "4. Search employee surname" << endl;
		/*cout << "3. Save employees" << endl;
		cout << "4. Load employees" << endl;*/
		cout << "5. Exit" << endl;
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
				cout << count << "count";
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
				employees = fileProviderForEmployees.redaction_employee_index(index,employees);
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
				fileProviderForEmployees.search_employee_surname(surname, employees);
			}
			else
			{
				cout << "Add employees" << endl;
			}
		}break;
		case 5:
		{
			exit(0);
		}break;
		}
		_getch();
	} while (true);
}