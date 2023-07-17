#include "Employees.h"

struct FileProviderForEmployees
{
	fstream file;

	vector<Employees> redaction_employee_index(int index, vector<Employees> employees);
	void search_employee_surname(string surname, vector<Employees> employees);
};
