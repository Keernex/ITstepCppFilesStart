#include "file_all_functions.h"
#include <conio.h>
#include "main.h"

void main()
{
	FileAllFunctions file_all_functions;

	Board funk_boards;
	string file_boards = "boards.bin";
	vector<Board> boards;
	int count_boards = 0;
	int count_tasks = 0;
	do
	{
		system("cls");
		cout << "1 - input board" << endl;
		cout << "2 - print board" << endl;
		cout << "3 - search board" << endl;
		cout << "4 - sort board" << endl;
		cout << "5 - redaction board" << endl;
		cout << "6 - remove board" << endl;
		cout << "7 - break" << endl;

		int select;
		cout << "input number: ";
		while (!(std::cin >> select) || select < 1 || select > 7)
		{
			cout << "input number: ";
			cin.clear();
			while (cin.get() != '\n')
				continue;
		}
		if (select == 1)
		{
			int select;
			cout << "input count: ";
			while (!(std::cin >> select))
			{
				cout << "input count: ";
				cin.clear();
				while (cin.get() != '\n')
					continue;
			}
			boards.resize(count_boards + select);
			for (int i = count_boards; i < count_boards + select; i++)
			{
				boards[i].input_board(i);
			}
			count_boards = boards.size();
			//save
		}
		if (select == 2 && boards.size() > 0)
		{
			for (int i = 0; i < boards.size(); i++)
			{
				boards[i].print_board(i,count_tasks);
			}
		}
		if (select == 3 && boards.size() > 0)
		{
			funk_boards.search_board(boards);
		}
		if (select == 4 && boards.size() > 1)
		{
			int old_index;
			cout << "Board by index: ";
			while (!(std::cin >> old_index) || old_index < 0 || old_index > boards.size() - 1)
			{
				cout << "Board by index: ";
				cin.clear();
				while (cin.get() != '\n')
					continue;
			}
			int new_index;
			cout << "Change the board according to index: ";
			while (!(std::cin >> new_index) || new_index < 0 || new_index > boards.size() - 1)
			{
				cout << "Change the board according to index : ";
				cin.clear();
				while (cin.get() != '\n')
					continue;
			}
			boards = funk_boards.sort_board(boards, old_index, new_index);
			//save
		}
		if (select == 5 && boards.size() > 0)
		{
			int index;
			cout << "Board index: ";
			while (!(std::cin >> index) || index < 0 || index > boards.size() - 1)
			{
				cout << "Board index: ";
				cin.clear();
				while (cin.get() != '\n')
					continue;
			}
			boards[index].redaction_board(boards, index);
			//save
		}
		if (select == 6 && boards.size() > 0)
		{
			int index;
			cout << "Board index: ";
			while (!(std::cin >> index) || index < 0 || index > boards.size() - 1)
			{
				cout << "Board index: ";
				cin.clear();
				while (cin.get() != '\n')
					continue;
			}
			boards = funk_boards.remove_board(boards, index);
			count_boards--;
			boards.resize(count_boards);
			//save
		}
		getchar();
		_getch();
	} while (true);


}








