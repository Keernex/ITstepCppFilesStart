#include "tasks.h"

#ifndef BOARDS_H
#define BOARDS_H

struct Board
{
	string name;
	//vector<Task> tasks;

	//board
	void input_board(int index);
	void print_board(int index, int count_tasks);
	void search_board(vector<Board> boards);
	vector<Board> sort_board(vector<Board> boards, int old_index, int new_index);
	void redaction_board(vector<Board> boards, int index);
	vector<Board> remove_board(vector<Board> boards, int index);
	//tasks
	//void input_task_in_board(int index);
	//void print_tasks(int index);
	//void search_tasks(vector<Task> elements);
	//void sort_tasks(vector<Task> elements);
	//vector<Task> redaction_tasks(vector<Task> elements, int index);
	//vector<Task> remove_tasks(vector<Task> elements, int index);
	//spez

};


#endif










