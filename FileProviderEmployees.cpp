#include "FileProviderEmployees.h"




void FileProviderEmployees::save_employee(vector<Employees>& employees)
{
	file.open("test.bin", ios::out | ios::binary);
	if (file.is_open())
	{
		int count = employees.size();
		file.write(reinterpret_cast<char*>(&count), sizeof(int));
		for (size_t i = 0; i < employees.size(); i++)
		{
			file.write(reinterpret_cast<char*>(&employees[i]), sizeof(Employees));
		}
		file.close();
		cout << "Employees were saved..." << endl;
	}
	else
	{
		cout << "Error opening file!" << endl;
	}
}

vector<Employees> FileProviderEmployees::load_employee(int &count,vector<Employees> employees)
{
    file.open("test.bin", ios::in | ios::binary);
    if (file.is_open())
    {
        file.read(reinterpret_cast<char*>(&count), sizeof(int));
        employees.resize(count);
        for (size_t i = 0; i < count; i++)
        {
            file.read(reinterpret_cast<char*>(&employees[i]), sizeof(Employees));
        }
        file.close();
        cout << "Employees were loaded..." << endl;
        return employees;
    }
    else
    {
        cout << "Error opening file!" << endl;
        return employees;
    }
}
















