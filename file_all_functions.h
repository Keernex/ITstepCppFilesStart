#include "boards.h"

struct FileAllFunctions
{
	fstream file;
	bool Check_file_empty(string filename);

	bool save_elements(vector<Board> items, int count, string filename);
	bool load_elements(vector<Board>& items, int& count, string filename);
};




