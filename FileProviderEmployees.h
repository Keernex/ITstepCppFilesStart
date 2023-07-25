#include "Employees.h"

struct FileProviderEmployees
{
	fstream file;
	bool Check_file_empty(string filename);
	bool save_elements(vector<Employees> employees, int count);
	bool load_elements(vector<Employees>& employees, int& count);
};
