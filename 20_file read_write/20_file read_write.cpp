#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// fstream --> write, read

const int SIZE = 50;
struct Book
{
	char name[SIZE]{};
	char author[SIZE]{};
	char publisher[SIZE]{};
	char genre[SIZE]{};
};

//struct Book
//{
//	string name;
//	string author;
//	string publisher;
//	string genre;
//};
int main()
{
	int size = 3;
	Book book = { "Harry Potter and the Philosopher's Stone","J.K. Rowling","Pottermore Publishing","Children's Fantasy" };
	Book* library = new Book[size]{
	   {"Iron Flame","Rebecca Yarros","Entangled: Red Tower Books","Fantasy"},
	   {"The Ever King","LJ Andrews","Victorious","Fantasy"},
	   book
	};

	// запис структури у файл
	//fstream file("data.txt", ios_base::out); // створили файловий потік і пов'язали з файлом, додали режим на запис
	//if (!file.is_open())
	//	cout << "Error. File not found" << endl;
	//else
	//{
	//	//file << book; Error
	//	file.write((char*)&book,sizeof(book));
	//}

	// читання з файлу структуру

	//fstream file("data.txt", ios_base::in);// створили файловий потік і пов'язали з файлом, додали режим на читання
	//Book res;
	//if (!file.is_open())
	//	cout << "Error" << endl;
	//else
	//{
	//	file.read((char*)&res, sizeof(Book));
	//}
	//cout << "\t\t Name      :: " << res.name << endl;
	//cout << "\t\t Author    :: " << res.author << endl;
	//cout << "\t\t Publisher :: " << res.publisher << endl;
	//cout << "\t\t Genre     :: " << res.genre << endl;

	// запис масиву структур
	//fstream file("data.txt", ios_base::out); // створили файловий потік і пов'язали з файлом, додали режим на запис
	//if (!file.is_open())
	//	cout << "Error. File not found" << endl;
	//else
	//{
	//	for (size_t i = 0; i < size; i++)
	//	{
	//		file.write((char*)&library[i], sizeof(Book));
	//	}
	//}
	//file.close();

	// читання з файлу масиву структур
	//fstream file("data.txt", ios_base::in);// створили файловий потік і пов'язали з файлом, додали режим на читання
	//Book res;
	//if (!file.is_open())
	//	cout << "Error" << endl;
	//else
	//{
	//	while (file.read((char*)&res, sizeof(Book)))
	//	{
	//		cout << "\n\n ========================= " << res.name << " ============================" << endl;
	//		cout << "\t\t Author    :: " << res.author << endl;
	//		cout << "\t\t Publisher :: " << res.publisher << endl;
	//		cout << "\t\t Genre     :: " << res.genre << endl;
	//	}
	//	
	//}

	/*fstream file("file.txt", ios_base::out | ios_base::in | ios_base::app);

	if (!file.is_open())
		cout << "Error" << endl;
	else {
		cout << "Start write :: " << file.tellg() << endl;
		file << "Hello World !!! " << endl;
		cout << "End write :: " << file.tellg() << endl;

		file.seekg(0);
		cout << "Start read :: " << file.tellg() << endl;
		string line;
		getline(file, line);
		cout << "Result :: " << line << endl;
		cout << "End read :: " << file.tellg() << endl;
	}
	file.close();*/

	// binary file

	fstream file("data.dat", ios_base::out | ios_base::in | ios_base::binary);
	if (!file.is_open())
		cout << "Error" << endl;
	else
	{
		file.write((char*)&book, sizeof(Book));

		file.seekg(0);

		Book res;
		file.read((char*)&res, sizeof(Book));
		cout << "\n\n ========================= " << res.name << " ============================" << endl;
		cout << "\t\t Author    :: " << res.author << endl;
		cout << "\t\t Publisher :: " << res.publisher << endl;
		cout << "\t\t Genre     :: " << res.genre << endl;
	}
	file.close();
}
