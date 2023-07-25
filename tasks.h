#include "lib.h"

#ifndef TASKS_H
#define TASKS_H

struct Task
{
	string name;
	int importance;
	string task;
	string date;
	Task();
	void input_task(int index);
	void print_task(int index);
};


#endif