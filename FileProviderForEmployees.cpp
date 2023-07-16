#include "FileProviderForEmployees.h"

fstream file;
bool FileProviderForEmployees::Save_Employees(Employees* employees, int count)
{
	file.open("test.bin", ios::out | ios::binary);
	if (file.is_open())
	{
		file.write((char*)&count, sizeof(int));
		for (size_t i = 0; i < count; i++)
		{
			file.write((char*)&employees[i], sizeof(employees));
		}
		file.close();
		cout << "Employees was saved..." << endl;
		return true;
	}
	else
	{
		cout << "Error opening file!" << endl;
		return false;
	}
}

bool FileProviderForEmployees::Load_Employees(Employees*& employees, int& count)
{
	file.open("test.bin", ios::in | ios::binary);
	file.read((char*)&count, sizeof(int));
	employees = new Employees[count];
	if (file.is_open())
	{
		for (size_t i = 0; i < count; i++)
		{
			file.read((char*)&employees[i], sizeof(Employees));
		}
		file.close();
		cout << "Employees was loaded..." << endl;
		return true;
	}
	else
	{
		cout << "Error opening file!" << endl;
		return false;
	}
}