#include <iostream>
using namespace std;

//int sum(int a, int b)
//{
//	return a + b;
//}
//int sum(int a, int b, int c)
//{
//	return a + b + c;
//}
//double sum(double a, double b)
//{
//	return a + b;
//}
//char sum(char a, char b)
//{
//	return a + b;
//}
//double sum(int a, double b)
//{
//	return a + b;
//}
//
//void fillArray(int arr[], size_t size, int min = 1, int max = 10)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = min + rand() % (max - min + 1);
//	}
//}
//void fillArray(double arr[], size_t size, int min = 1, int max = 10)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = (min + rand() % (max - min + 1)) / 3;
//	}
//}
//void fillArray(char arr[], size_t size, int min = 1, int max = 10)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = min + rand() % (max - min + 1);
//	}
//}
//void printArray(int arr[], size_t size, string prompt = "")
//{
//	cout << prompt << "\t";
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << "\t";
//	}cout << endl;
//}
//void printArray(double arr[], size_t size, string prompt = "")
//{
//	cout << prompt << "\t";
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << "\t";
//	}cout << endl;
//}
//void printArray(char arr[], size_t size, string prompt = "")
//{
//	cout << prompt << "\t";
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << "\t";
//	}cout << endl;
//}

template <typename T>
T sum(T a, T b)
{
	return a + b;
}
template <typename T, typename T2>
T sum(T a, T2 b)
{
	return a + b;
}
template <typename T, typename T2, typename T3>
T sum(T a, T2 b, T3 c)
{
	return a + b + c;
}
template <typename T>
void fillArray(T arr[], size_t size, int min = 1, int max = 10, bool db = false)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
		if (db)
		{
			arr[i] = arr[i] / 3;
		}
	}
}
template <typename T, int COL = 5>
void fillArray(T arr[][COL], size_t row, size_t col, int min = 1, int max = 10, bool db = false)
{
	for (size_t j = 0; j < row; j++)
	{
		for (size_t i = 0; i < col; i++)
		{
			arr[j][i] = min + rand() % (max - min + 1);
			if (db)
			{
				arr[j][i] /= 3;
			}
		}
	}
}
template <typename T, int COL = 5>
void printArray(T arr[][COL], size_t row, size_t col, string prompt = "")
{
	cout << prompt << "\n";
	for (size_t j = 0; j < row; j++)
	{
		for (size_t i = 0; i < col; i++)
		{
			cout << arr[j][i] << "\t";
		}cout << endl;
	}
	
}
template <typename T>
void printArray(T arr[], size_t size, string prompt = "")
{
	cout << prompt << "\t";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;
}
int main()
{
	/*cout << sum(2.9, 4.9) << endl;
	cout << sum('A', ' ') << endl;
	cout << sum(5, 4, 3) << endl;
	cout << sum(5, 4.5) << endl;*/
	const int SIZE = 10;
	int arr[SIZE]{};
	double arr_d[SIZE]{};
	char arr_c[SIZE]{};
	fillArray(arr, SIZE);
	fillArray(arr_d, SIZE, 10, 50, true);
	fillArray(arr_c, SIZE, 'A', 'Z');
	printArray(arr, SIZE, "Print array int ");
	printArray(arr_d, SIZE, "Print array double ");
	printArray(arr_c, SIZE, "Print array char ");
	cout << "int    --> " << sum(5, 4) << endl;
	cout << "double --> " << sum(5.5, 4.6) << endl;
	cout << "char   --> " << sum('A', ' ') << endl;
	string word1 = "Hello", word2 = "World";
	cout << "string --> " << sum(word1,word2) << endl;
	cout << "int    --> " << sum(5, 4.6) << endl;
	cout << "int    --> " << sum(5.0, 4.6, 9.9) << endl;

	const int row = 4, col = 7;
	int mas[row][col]{};
	fillArray(mas, row, col, 10, 50,false);
	printArray(mas, row, col);
}

