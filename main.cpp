#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
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
            string lend[100];
            for (int i = 0; i < line.length(); i++)
            {
                if (line[i] == ' ' && lend->length() > 6)
                {
                    cout << lend;
                    file_2 << lend;
                    lend = "";
                }
                else if (line[i] == ' ' && lend->length() < 7)
                {
                    lend = "";
                }
                else
                {
                    lend[i] = line[i];
                }
            }file_2 << endl;
            cout << endl;
        }
    }
    else
    {
        cout << "Error" << endl;
    }
    file_1.close();
    file_2.close();
}