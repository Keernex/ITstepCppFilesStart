#include "boards.h"

void Board::input_board(int index)
{
	cout << endl;
	cout << "Board index: " << index << endl;
	cout << "Board name: ";
	getline(cin, name);
}

void Board::print_board(int index,int count_tasks)
{
	cout << endl;
	cout << "Board name: " << index << endl;
	cout << "Board name: " << name;
	/*for (int i = 0; i < count_tasks; i++)
	{
		tasks[i].print_task(i);
	}*/
}

void Board::search_board(vector<Board> boards)
{
	string name;
	cout << "Enter name board: ";
	getline(cin, name);
	for (int i = 0; i < boards.size(); i++)
	{
		if (boards[i].name == name)
		{
			cout << "Board: " << name << endl;
			//tasks[i].print_task(i);
		}
	}
}

vector<Board> Board::sort_board(vector<Board> boards, int old_index, int new_index)
{
	vector<Board> item;
	item.resize(1);
	item.push_back(boards[old_index]);
	boards[old_index] = boards[new_index];
	boards[new_index] = item[0];
	return boards;
}

void Board::redaction_board(vector<Board> boards, int index)
{
	if (index >= 0 && index < boards.size())
	{
		cout << endl;
		cout << "Board index: " << index << endl;
		cout << "Board name: ";
		getline(cin, name);
	}
}

vector<Board> Board::remove_board(vector<Board> boards, int index)
{
	if (index >= 0 && index < boards.size())
	{
		boards.erase(boards.begin() + index);
	}
	return boards;
}


//void Board::input_task_in_board(int index)
//{
//	cout << endl;
//	cout << "Board index: " << index << endl;
//	cout << "Board name: " boards[index].name;
//	tasks[index].input_task(index);
//}



















