#include "FileProviderEmployees.h"
#include <conio.h>


void main()
{
	FileProviderEmployees file_provider_employees;
	Employees funk_employees;
	vector<Employees> employees;
	int count_employees = 0;
	string file_employees = "test.bin";
	do
	{
		if (file_provider_employees.Check_file_empty(file_employees))
		{
			file_provider_employees.load_elements(employees, count_employees);
		}
		system("cls");
		cout << "1 - input employees" << endl;
		cout << "2 - redaction employee index" << endl;
		cout << "3 - print employees" << endl;
		cout << "4 - search employee surname" << endl;
		cout << "5 - search employee age" << endl;
		cout << "6 - remove employee" << endl;
		cout << "7 - end" << endl;

		int select;
		cout << "input number: ";
		while (!(cin >> select) || select < 1 || select > 7)
		{
			cout << "input number: ";
			cin.clear();
			while (cin.get() != '\n')
				continue;
		}
		if (select == 1)
		{
			int select;
			cout << "input count: ";
			while (!(cin >> select) || select < 0)
			{
				cout << "input count: ";
				cin.clear();
				while (cin.get() != '\n')
					continue;
			}
			employees.resize(count_employees + select);
			for (int i = count_employees; i < select + count_employees; i++)
			{
				employees[i].input_employees(i);
			}count_employees = employees.size();
			file_provider_employees.save_elements(employees, count_employees);
		}
		if (select == 2)
		{
			int select;
			cout << "input index: ";
			while (!(cin >> select) || select < 0 || select > count_employees - 1)
			{
				cout << "input index: ";
				cin.clear();
				while (cin.get() != '\n')
					continue;
			}
			employees = funk_employees.redaction_employee_index(select, employees);
			file_provider_employees.save_elements(employees, count_employees);
		}
		if (select == 3)
		{
			for (int i = 0; i < count_employees; i++)
			{
				employees[i].print_employees(i);
			}
		}
		if (select == 4)
		{
			string surneme;
			cout << "input surneme: ";
			while (!(cin >> surneme))
			{
				cout << "input surneme: ";
				cin.clear();
				while (cin.get() != '\n')
					continue;
			}
			funk_employees.search_employee_surname(surneme, employees);
		}
		if (select == 5)
		{
			int age;
			cout << "input age: ";
			while (!(cin >> age))
			{
				cout << "input age: ";
				cin.clear();
				while (cin.get() != '\n')
					continue;
			}
			funk_employees.search_employee_age(age, employees);
		}
		if (select == 6)
		{
			int select;
			cout << "input index: ";
			while (!(cin >> select) || select < 0 || select > count_employees - 1)
			{
				cout << "input index: ";
				cin.clear();
				while (cin.get() != '\n')
					continue;
			}
			employees = funk_employees.remove_employee(select, employees);
			count_employees--;
			employees.resize(count_employees);
			file_provider_employees.save_elements(employees, count_employees);
		}
		if (select == 7)
		{
			break;
		}
		getchar();
		_getch();
	} while (true);





}





