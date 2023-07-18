#include "Login.h"


Login::Login()
{
	username = "";
	password = "";
}
Login::Login(string username, string password) : Login()
{
	this->username = username;
	this->password = password;
}
void Login::setUsername(string username) {
	if (username.empty() || username.size() < 5)
	{
		cout << "Username must be at least 5 characters long" << endl;
		return;
	}
	this->username = username;

}
void Login::setPassword(string password) {
	if (password.empty() || password.size() < 8)
	{
		cout << "Password must be at least 8 characters long" << endl;
		return;
	}
	this->password = password;
}
string Login::getUsername()
{
	return username;
}
string Login::getPassword()
{
	return password;
}