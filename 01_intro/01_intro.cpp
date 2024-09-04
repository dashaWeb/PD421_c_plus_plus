#include <iostream>
//using std::string;
using namespace std;

int main()
{

	// ctrl + shift + /
	// - однорядковий коментар
	/*
	 багаторядковий коментар
	*/
	/* cout << "Hello World!" << endl;
	 cout << "I 'LOVE' \"C++\"" << endl;

	 cout << "Hello World!" << endl;
	 cout << "I \n \t \\LOVE\\ \n\t\tC++" << endl;
	 //cout << "I " << endl << "LOVE" << endl << "C++" << endl;
	 cout << "Hello\b World! \a" << endl;
	 cout << "Hello World!" << endl;
	 cout << "Hello\b World! \a" << endl;

	 cout << R"(
	 I
		 Love
				 you
						 C++!
 )";

	 system("pause");*/

	 // data types C++
	 // number
	 //      int
	 //      float
	 // char
	 // boolean

	 // type name;
	 // firstName

	int number = 125;
	double number_2 = 2.5;
	cout << "Number (int) :: " << number << "\n" << "Number (double) :: " << number_2 << endl;
	char symbol = 'w';
	bool flag = false;
	cout << "Char :: " << symbol << endl;
	cout << "Boolean :: " << boolalpha << flag << endl;
	int number_3 = 45.8;
	cout << "Number_3 :: " << number_3 << endl;

	auto result = number + number_2 + symbol + flag + number_3;
	// int + double + char + bool + int
	cout << "Result :: " << result << endl;
	cout << (int)number_2 << endl;
	cout << (char)206 << endl;
	cout << (int)'A' << endl;
	cout << boolalpha << (bool)-255 << endl;
	cout << boolalpha << (bool)255 << endl;
	cout << boolalpha << (bool)0 << endl;

	/*
		+
		-
		*
		/
		%
		()
	*/
	/* int a, b, c;
	 a = { 5.5 };
	 cout << a << endl;*/
	 /*int a = { 10 };
	 cout << a << endl;*/

	int a = 2, b = 3;
	cout << a << " == " << b << boolalpha << " --> " << (a == b) << endl; // false
	cout << a << " > " << b << boolalpha << " --> " << (a > b) << endl; // false
	cout << a << " < " << b << boolalpha << " --> " << (a < b) << endl; // true
	cout << a << " >= " << b << boolalpha << " --> " << (a >= b) << endl; // false
	cout << a << " <= " << b << boolalpha << " --> " << (a <= b) << endl; // true
	cout << a << " != " << b << boolalpha << " --> " << (a != b) << endl; // true
	bool test = true;
	cout << (!test) << endl;

	// Унарний оператор
	a++;
	b--;
	cout << "a :: " << a << endl; // 3
	cout << "b :: " << b << endl; // 2
	cout << "a :: " << a++ << endl; // 3 
	cout << "a :: " << a << endl; // 4
	cout << "a :: " << ++a << endl; // 5 
	a = 2; b = 3;
	cout << a++ - --b + a - b << endl; // 
	cout << "a :: " << a << endl; // 4
	/*
	* 1) --b {2}
	* 2) 2 - 2 {0}
	* 0 + 2 = 2
	*  2 - 2 {0}
	*/
	// Бінарний оператор
	// a + b
	// Тернарний оператор
	// a ? b : c
	// a > b ? a = 22 : b = 50

	int day, month, year;
	cout << "Enter date dd mm yyyy :: ";
	cin >> day >> month >> year;
	cout << "Date:: " << (day < 10 ? "0" : "") << day << "." << (month < 10 ? "0" : "") << month << "." << year << endl;

	const double PI = 3.14;
	cout << (day < 30 and day > 0) << endl;
	// && - and
	// || - or
}

