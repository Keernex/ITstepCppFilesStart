#include "FileProviderEmployees.h"


bool FileProviderEmployees::Check_file_empty(string filename)
{
	ifstream file(filename, ios::binary);

	if (!file)
	{
		return true;
	}

	file.seekg(0, ios::end);
	streampos fileSize = file.tellg();

	if (fileSize == 0)
	{
		return false;
	}

	return true;
}




bool FileProviderEmployees::save_elements(vector<Employees> employees, int count)
{
	file.open("test.bin", ios::out | ios::binary);
	if (file.is_open())
	{
		file.write((char*)&count, sizeof(int));
		for (size_t i = 0; i < count; i++)
		{
			file.write((char*)&employees[i], sizeof(Employees));
		}
		file.close();
		cout << "Person was saved..." << endl;
		return true;
	}
	else
	{
		cout << "Error opening file!" << endl;
		return false;
	}
}

bool FileProviderEmployees::load_elements(vector<Employees> &employees, int& count)
{
	file.open("test.bin", ios::in | ios::binary);
	file.read((char*)&count, sizeof(int));
	employees.resize(count);
	if (file.is_open())
	{
		for (size_t i = 0; i < count; i++)
		{
			file.read((char*)&employees[i], sizeof(Employees));
		}
		file.close();
		cout << "Person was loaded..." << endl;
		return true;
	}
	else
	{
		cout << "Error opening file!" << endl;
		return false;
	}
}

