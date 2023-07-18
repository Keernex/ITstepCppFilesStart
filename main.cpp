#include "intro_screen.h"

int main()
{
	FileWork file;
	int count = 3;
	string* users = new string[count]{"admin", "vladyslav", "alexey"};
	string* passwords = new string[count]{ "adminadmin", "12345678", "alexey" };
	file.Write(users, passwords, count);
	IntroScreen::Show();
	return 0;
}