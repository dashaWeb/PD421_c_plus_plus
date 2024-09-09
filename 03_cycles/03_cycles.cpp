#include <iostream>
#include <ctime>
using namespace std;
int main()
{

	//int i = 0; // лічильник
	///*while (i < 10)
	//{
	//	cout << i << "\t";
	//	i++;
	//}*/
	//while (i < 10)
	//{
	//	cout << ++i << "\t";
	//}
	//cout << endl;


	/*int answer;
	do
	{
		cout << "2 + 2 = ? --> ";
		cin >> answer;
	} while (answer != 4);*/

	//int start = 10;
	//int end = 0;
	//// 10 9 8 7 6 5 4 3 2 1
	//for (size_t i = start; i != end; i--)
	//{
	//	cout << i << "\t";
	//}
	//cout << endl;

	// break
	// continue

	/*int number;
	cout << "Enter number --> ";
	cin >> number;

	int counter = 0;
	for (size_t i = 1; i <= number; i++)
	{
		if (number % i == 0)
			counter++;
	}

	cout << counter << endl;
	if (counter > 2) {
		cout << "This number is complex" << endl;
	}
	else {
		cout << "This number is prime" << endl;
	}*/

	/*int number;
	cout << "Enter number --> ";
	cin >> number;

	bool counter = true;
	for (size_t i = 2; i <= number / 2; i++)
	{
		if (number % i == 0) {
			counter = false;
			break;
		}
	}

	cout << counter << endl;
	if (!counter) {
		cout << "This number is complex" << endl;
	}
	else {
		cout << "This number is prime" << endl;
	}*/

	/*for (size_t i = 1; i <= 20; i++)
	{
		if (i % 3 == 0)
			continue;

		cout << i << "\t";
	}
	cout << endl;*/

	/*1 10
	2 9
	3 8*/

	/*for (size_t i = 1, j = 10; i <= 10; i++, j--)
	{
		cout << i << "\t" << j << endl;

	}*/
	/*for (int i = 10; i >= 0; i--)
	{
		cout << i << "\t";
	}
	cout << endl;*/
	srand(time(0));
	int min = -5;
	int max = 5;
	for (size_t i = 0; i < 10; i++)
	{
		cout << min + rand() % (max - min + 1)<< "\t" << endl;

	}
	// min + rand() % (max - min + 1)
	// 0 - 9
	// 1 - 10
}

