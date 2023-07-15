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
            vector<string> words;
            string word;
            for (int i = 0; i <= line.length(); i++)
            {
                if (line[i] == ' ' || line[i] == '\0')
                {
                    if (word.length() >= 7)
                    {
                        cout << word;
                        file_2 << word;
                    }
                    word = "";
                }
                else
                {
                    word += line[i];
                }
            }
            file_2 << endl;
            cout << endl;
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