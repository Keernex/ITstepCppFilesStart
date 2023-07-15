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
        vector<string> lines;
        while (getline(file_1, line))
        {
            lines.push_back(line);
        }

        reverse(lines.begin(), lines.end());

        int i = 0;
        while (i < lines.size())
        {
            cout << lines[i] << endl;
            file_2 << lines[i] << endl;
            i++;
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