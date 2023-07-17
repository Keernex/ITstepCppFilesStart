#include "Employees.h"

struct FileProviderEmployees
{
	fstream file;
	void save_employee(vector<Employees>& employees);
	vector<Employees> load_employee(int &count, vector<Employees> employees);
};
