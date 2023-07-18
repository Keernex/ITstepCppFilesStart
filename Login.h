#include "lib.h"


struct Login
{
private:
	string username;
	string password;
public:
	Login();
	Login(string username, string password);
	void setUsername(string username);
	void setPassword(string password);
	string getUsername();
	string getPassword();
};