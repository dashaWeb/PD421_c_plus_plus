#include <iostream>
#include "source.h"
using namespace std;


int main()
{
	int size = 0;
	Source* sources;


	int choice;
	while (true)
	{
		cout << "\t [1] - fill db; \n\t [2] - print db; \n\t [3] - add source; \n\t [0] - exit; \n\t\t Enter :: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			fillDB();
			break;
		}
		case 2: {
			sources = readAll(size);
			if (sources == nullptr) {
				cout << "File not found !!! " << endl;
			}
			printAllSource(sources, size);
			break;
		}
		case 3: {
			Source tmp;
			editSource(tmp);
			saveSource(tmp);
			break;
		}
		}
		if (choice == 0)
			break;
	}
}
