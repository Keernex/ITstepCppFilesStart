#include "Employees.h"

struct FileProviderForEmployees
{
	fstream file;
	bool Save_Employees(Employees* employees, int count = 1);
	bool Load_Employees(Employees*& employees, int& count);

};
