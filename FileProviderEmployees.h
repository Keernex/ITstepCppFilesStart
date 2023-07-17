#include "Employees.h"

struct FileProviderEmployees
{
	fstream file;
	bool save_employee(Person* person, int count);
	bool load_employee(Person*& person, int& count);
};
