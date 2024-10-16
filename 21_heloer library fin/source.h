#pragma once
#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::swap;
using std::to_string;
using std::ofstream;
using std::ifstream;
using std::ios_base;

const short SIZE = 50;
//(назва, автор, видавництво, жанр)
enum Type
{
	BOOK = 1,NEWSPAPER,MAGAZINE
};
struct Source
{
	Type type;
	char name[SIZE]{};
	int year;
	char genre[SIZE] = "";
	char author[SIZE] = "";
};

void fillDB();
void editSource(Source& source);
void saveSource(Source source, string fname = "source.dat");
void printSource(Source source);
void printAllSource(Source* arr, const size_t length);
Source* readAll(int& size, string fname = "source.dat");