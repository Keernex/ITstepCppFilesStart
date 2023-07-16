#include "lib.h"


struct Employees
{
	char name[10];
	char surname[10];
	int age;

	void print();
	void read();
};