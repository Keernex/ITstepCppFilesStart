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
        int len_file = 0;
        int index = -1;
        while (getline(file_1, line))
        {
            lines.push_back(line);
            for (int i = 0; i < line.size(); i++)
            {
                if (line[i] == ' ')
                {
                    index = lines.size() - 1;;
                }
            }
        }

        int i = 0;
        while (i < lines.size())
        {
            if (index == i)
            {
                cout << lines[i];
                cout << "\n------------\n";
                file_2 << lines[i];
                file_2 << "\n------------\n";
            }
            else {
                cout << lines[i] << endl;
                file_2 << lines[i] << endl;
            }
            i++;
        }
        if (index == -1)
        {
            cout << "------------";
            file_2 << "------------";
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