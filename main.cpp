#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string line;

    fstream file_1("text_1.txt");
    fstream file_2("text_2.txt");

    if (file_1.is_open() && file_2.is_open())
    {
        while (getline(file_1, line))
        {
            cout << line << endl;
            file_2 << line << endl;
        }
        file_1.close();
        file_2.close();
    }
    else
    {
        cout << "Error" << endl;
    }

    return 0;
}