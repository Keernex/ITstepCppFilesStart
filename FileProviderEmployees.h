#include "Employees.h"

struct FileProviderEmployees
{
	fstream file;
	bool save_employee(vector<Employees> employees, int count);
	bool load_employee(vector<Employees>& employees, int& count);
};
