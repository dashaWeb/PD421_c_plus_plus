#include <iostream>
using namespace std;
int main()
{
	srand(time(0));

	const int row = 3, col = 4;
	int arr[row][col]{};

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10 + 1;
		}
	}


	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	cout << "\n========================================\n\n";
	//Завдання 2. У двовимірному масиві цілих чисел пораху -
	//	вати суму елементів : у кожному рядку; у кожному стовп -
	//	ці; одночасно по всіх рядках і всіх стовпцях.Оформити

	//	в такий спосіб :

	int mas[][col]{
		{3,5,6,7},
		{12,1,1,1},
		{0,7,12,1}
	};

	for (size_t i = 0; i < row; i++)
	{
		int sum = 0;
		for (size_t j = 0; j < col; j++)
		{
			cout << mas[i][j] << "\t";
			sum += mas[i][j];
		}
		cout << " | " << sum;
		cout << endl;
	}
	for (size_t i = 0; i < (col + 2) * 8 ; i++)
	{
		cout << "-";
	}
	cout << endl;

	int totalSum = 0;
	for (size_t i = 0; i < col; i++)
	{
		int sum = 0;
		for (size_t j = 0; j < row; j++)
		{
			sum += mas[j][i];
		}
		totalSum += sum;
		cout << sum << "\t";
	}
	cout << " | " << totalSum;
	cout << endl;

	//	3  5 6  7 | 21
	//	12 1 1  1 | 15
	//	0  7 12 1 | 20
	//	--------------------
	//	15 3 19 9 | 56
}
