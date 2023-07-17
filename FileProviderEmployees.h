#include "Employees.h"

struct FileProviderEmployees
{
	fstream file;

	vector<Employees> redaction_employee_index(int index, vector<Employees> employees);
	void search_employee_surname(string surname, vector<Employees> employees);
	void search_employee_age(int age, vector<Employees> employees);
	vector<Employees> remove_employee(int index, vector<Employees> employees);
};
