#include "FileProviderEmployees.h"




bool FileProviderEmployees::save_employee(Person* person, int count = 1)
{
	file.open("test.bin", ios::out | ios::binary);
	if (file.is_open())
	{
		file.write((char*)&count, sizeof(int));
		for (size_t i = 0; i < count; i++)
		{
			file.write((char*)&person[i], sizeof(Person));
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

bool FileProviderEmployees::load_employee(Person*& person, int& count)
{
	file.open("test.bin", ios::in | ios::binary);
	file.read((char*)&count, sizeof(int));
	person = new Person[count];
	if (file.is_open())
	{
		for (size_t i = 0; i < count; i++)
		{
			file.read((char*)&person[i], sizeof(Person));
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

















