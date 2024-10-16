#include "source.h"

void fillDB()
{
	int number;
	cout << "Enter number of source --> ";
	cin >> number;
	Source tmp;
	for (size_t i = 0; i < number; i++)
	{
		editSource(tmp);
		saveSource(tmp);
	}
}

void editSource(Source& source)
{
	cout << "\n\t Enter type source ([1] - BOOK; [2] - NEWSPAPER; [3] - MAGAZINE) --> ";
	int tmp;
	cin >> tmp;
	source.type = (Type)tmp;
	cout << "\t Enter year -- > "; cin >> source.year;

	cin.ignore();
	cout << "\t Enter name -- > "; cin.getline(source.name, SIZE);


	if (source.type == Type::BOOK)
	{
		cout << "\t Enter genre -- > "; cin.getline(source.genre, SIZE);
		cout << "\t Enter author -- > "; cin.getline(source.author, SIZE);
	}
}

void saveSource(Source source, string fname)
{
	ofstream file(fname, ios_base::app | ios_base::binary);
	if (!file.is_open())
	{
		cout << "Error" << endl;
		return;
	}

	file.write((char*)&source, sizeof(Source));
	file.close();
}

void printSource(Source source)
{
	cout << "\n\t=================================== " << (source.type == Type::BOOK ? "BOOK" : (source.type == Type::MAGAZINE ? "MAGAZINE" : "NEWSPAPER")) << "===================================" << endl;
	cout << "\t\t Name   :: " << source.name << endl;
	if (source.type == Type::BOOK) {
		cout << "\t\t Author :: " << source.name << endl;
		cout << "\t\t Genre  :: " << source.name << endl;
	}
	cout << "\t\t Year   :: " << source.year << endl;

}

void printAllSource(Source* arr, const size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		printSource(arr[i]);
	}
}

Source* readAll(int& size, string fname)
{
	ifstream file(fname);
	if (!file.is_open()) {
		cout << "Error" << endl;
		return nullptr;
	}
	file.seekg(0, ios_base::end);
	if (file.tellg() == 0)
		return nullptr;

	size = file.tellg() / sizeof(Source);
	file.seekg(0);

	Source* tmp = new Source[size];
	for (size_t i = 0; i < size; i++)
	{
		file.read((char*)&tmp[i], sizeof(Source));
	}
	file.close();
	return tmp;
}
