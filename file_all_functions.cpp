#include "file_all_functions.h"



fstream file;

bool FileAllFunctions::Check_file_empty(string filename)
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

bool FileAllFunctions::save_elements(vector<Board> items, int count, string filename)
{
	file.open(filename, ios::out | ios::binary);
	if (file.is_open())
	{
		file.write((char*)&count, sizeof(int));
		for (size_t i = 0; i < count; i++)
		{
			file.write((char*)&items[i], sizeof(Board));
		}
		file.close();
		return true;
	}
	else
	{
		cout << "Error opening file!" << endl;
		return false;
	}
}

bool FileAllFunctions::load_elements(vector<Board>& items, int& count, string filename)
{
	file.open(filename, ios::in | ios::binary);
	file.read((char*)&count, sizeof(int));
	items.resize(count);
	if (file.is_open())
	{
		for (size_t i = 0; i < count; i++)
		{
			file.read((char*)&items[i], sizeof(Board));
		}
		file.close();
		return true;
	}
	else
	{
		cout << "Error opening file!" << endl;
		return false;
	}
}