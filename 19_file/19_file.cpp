#include <iostream>
#include <string>
#include <fstream> // read and write file

using namespace std;

// ofstream --> write  (cout)
// ifstream --> read   (cin)

// fstream --> write and read


int main()
{
	string line = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
	string fname = "my.txt";
	cout << line.size() << endl;
	/*ofstream file;
	file.open(fname, ios_base::app);

	if (!file.is_open())
	{
		cout << "File not found " << endl;
	}
	else
	{
		getline(cin, line);
		file << line << endl;
	}
	file.close();*/

	string fname_number = "number.txt";
	/*ofstream file(fname_number, ios_base::app);
	if (!file.is_open())
	{
		cout << "File not found" << endl;
	}
	else
	{
		int number;
		while (cin >> number)
		{
			file << number << endl;
		}
	}*/


	ifstream file(fname);
	if (!file.is_open())
	{
		cout << "Error!!! File not found" << endl;
	}
	else
	{
		while (!file.eof())
		{
			file >> line;
			cout << "Result read file  (string) :: " << line << endl;
		}
		cout << "\n\nTest seekg  (string)" << endl;
		//file.seekg(10, ios_base::end);
		cout << "Position file cursor :: " << file.tellg() << endl;

		file.clear();
		file.seekg(0);
		cout << "Position file cursor :: " << file.tellg() << endl;
		while (file >> line) // читає одне слово на кожній ітерації
		{
			cout << "Result read file :: " << line << endl;
		}

		cout << "\n\nTest seekg(-20, ios_base::end)  (string)" << endl;
		file.clear();
		file.seekg(-20, ios_base::end);
		cout << "Position file cursor :: " << file.tellg() << endl;
		while (file >> line) // читає одне слово на кожній ітерації
		{
			cout << "Result read file :: " << line << endl;
		}

		cout << "\n\nTest getline() (string)" << endl;
		file.clear();
		file.seekg(0);
		while (getline(file, line)) // читає весь рядок
		{
			cout << "Result read file :: " << line << endl;
		}

		cout << "\n\nTest getline() (char[])" << endl;
		char str[100];
		short counter = 0;
		file.clear();
		file.seekg(0);

		while (file >> str) //читає одне слово на кожній ітерації
		{
			cout << "Result read file " << ++counter << ":: " << str << endl;
		}


		cout << "\n\nTest getline() (char[])" << endl;

		counter = 0;
		file.clear();
		file.seekg(0);

		while (file.getline(str,100)) // читає весь рядок
		{
			cout << "Result read file :: " << ++counter << ". " << str << endl;
		}


		cout << "\n\nTest getline() (char[])" << endl;

		counter = 0;
		file.clear();
		file.seekg(0);
		char s;
		while (file.get(s)) //читає один символ
		{
			cout << "Result read file :: " << ++counter << ". " << s << endl;
		}
	}
	file.close();
	remove("my.txt"); // delete file
}
