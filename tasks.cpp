#include "tasks.h"

Task::Task()
{
	name = "NULL";
	importance = 0;
	task = "NULL";
	date = "NULL";
}

void Task::input_task(int index)
{
	cout << "Task index: " << index << endl;
	cout << "Name task: ";
	getline(cin, name);
	cout << "Importance task: ";
	cin >> importance;
	cout << "Task task: ";
	getline(cin, task);
	cout << "Date task: ";
	getline(cin, date);
}

void Task::print_task(int index)
{
	cout << "Task index: " << index << endl;
	cout << "Name task: " << name << endl;
	cout << "Importance task: " << importance << endl;
	cout << "Task task: " << task << endl;
	cout << "Date task: " << date << endl;
}
