#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	const int SIZE = 5;
	int arr[10];
	int mas[SIZE];
	//int length = 15;
	//int mass[length]; error

	/*cout << arr[0] << "\t";
	cout << arr[1] << "\t";
	cout << arr[2] << "\t";*/
	// min + rand() % (max - min + 1);
	/*arr[0] = 5;
	cin >> arr[1];
	arr[2] = rand();*/

	// fill array
	for (size_t i = 0; i < 10; i++)
	{
		arr[i] = rand() % 10 + 1;
	}

	// print array
	for (size_t i = 0; i < 10; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = 10 - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	cout << "Mas -- > ";
	for (size_t i = 0; i < SIZE; i++)
	{
		mas[i] = -10 + rand() % (-10 - 1 + 1);
	}
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << mas[i] << "\t";
	}
	cout << endl;
	cout << "=================== Unique array =====================" << endl;
	const int LENGTH = 10;
	int unique[LENGTH];
	for (size_t i = 0; i < LENGTH; )
	{
		int number = rand() % 10 + 1;
		bool flag = true;
		for (size_t j = 0; j < i; j++)
		{
			if (unique[j] == number) {
				flag = false;
				break;
			}
		}
		if (flag)
		{
			unique[i] = number;
			i++;
		}
	}

	for (size_t i = 0; i < LENGTH; i++)
	{
		cout << unique[i] << "\t";
	}
	cout << endl;

	int arr2[LENGTH]{};
	for (size_t i = 0; i < LENGTH; i++)
	{
		cout << arr2[i] << "\t";
	}
	cout << endl;


	int arr3[LENGTH]{15,25,35,45,55};
	for (size_t i = 0; i < LENGTH; i++)
	{
		cout << arr3[i] << "\t";
	}
	cout << endl;


	int arr4[]{ 15,25,35,45,55,65,75,85,95 };
	cout << sizeof(LENGTH)<< endl;
	cout << sizeof(int)<< endl;
	cout << sizeof(arr4) / sizeof(arr4[0]) << endl;
	int size = sizeof(arr4) / sizeof(arr4[0]);
	for (size_t i = 0; i < size; i++)
	{
		cout << arr4[i] << "\t";
	}
	cout << endl;

	string month[12]{};
	double salary[12];
}
