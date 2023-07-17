#include "lib.h"


struct Employees
{
	string name;
	string surname;
	int age;

	void input_employees(int index);
	vector<Employees> redaction_employee_index(int index, vector<Employees> employees);
	void print_employees(int index);
	void search_employee_surname(string surname, vector<Employees> employees);
	void search_employee_age(int age, vector<Employees> employees);
	vector<Employees> remove_employee(int index, vector<Employees> employees);

};