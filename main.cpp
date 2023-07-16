#include <conio.h>
#include "FileProviderForEmployees.h"

void main()
{
	FileProviderForEmployees fileProviderForEmployees;
	Employees* employees = nullptr;
	int count = 0;
	do
	{
		system("cls");
		cout << "Employees manager: " << endl;
		cout << "1. Add employees" << endl;
		cout << "2. Print employees" << endl;
		cout << "3. Save employees" << endl;
		cout << "4. Load employees" << endl;
		cout << "5. Exit" << endl;
		int menu;
		cout << "Enter menu: ";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			if (employees == nullptr)
			{
				cout << "Enter count: ";
				cin >> count;
				employees = new Employees[count];
				for (size_t i = 0; i < count; i++)
				{
					employees[i].read();
				}
			}
			else
			{
				cout << "Employees list already exist. Do you want to resize array<Person>? [y]/[n]->";
				char answer;
				cin >> answer;
				if (answer == 'y' || answer == 'Y')
				{
					cout << "Enter count: ";
					cin >> count;
					delete[] employees;
					employees = new Employees[count];
					for (size_t i = 0; i < count; i++)
					{
						employees[i].read();
					}
				}
			}
		}break;
		case 2:
		{
			if (employees != nullptr && count != 0)
			{
				for (size_t i = 0; i < count; i++)
				{
					employees[i].print();
				}
			}
			else
			{
				cout << "Employees list is empty!" << endl;
			}
		}break;
		case 3:
		{
			if (employees != nullptr && count != 0)
			{
				fileProviderForEmployees.Save_Employees(employees, count);
			}
			else
			{
				cout << "Employees list is empty!" << endl;
			}
		}break;
		case 4:
		{
			fileProviderForEmployees.Load_Employees(employees, count);
		}break;
		case 5:
		{
			exit(0);
		}break;
		}
		_getch();
	} while (true);

}