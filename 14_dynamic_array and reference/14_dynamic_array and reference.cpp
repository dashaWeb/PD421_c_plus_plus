#include <iostream>
using namespace std;


void Swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void fill(int* arr, size_t length, int min = 1, int max = 10)
{
	for (size_t i = 0; i < length; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}
}
void print(int* arr, size_t length, string prompt = "")
{
	if (!prompt.empty())
		cout << prompt << " :: ";
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;
}

void pushBack(int* &arr, size_t& length, int value)
{
	int* tmp = new int[length + 1];
	for (size_t i = 0; i < length; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[length++] = value;
	delete[]arr;
	arr = tmp;
}

void insert(int*& arr, size_t& length, int value, int index)
{
	if (index < 0 || index >= length) {
		pushBack(arr, length, value);
		return;
	}
	int* tmp = new int[length + 1];
	for (size_t i = 0; i < length; i++)
	{
		if (i < index) {
			tmp[i] = arr[i];
		}
		else {
			tmp[i + 1] = arr[i];
		}
	}
	tmp[index] = value;
	length++;
	delete[] arr;
	arr = tmp;
}

void remove(int*& arr, size_t& length, int index)
{
	if (index < 0 || index >= length)
	{
		cout << "Error! index out range" << endl;
		return;
	}
	int* tmp = new int[--length];
	for (size_t i = 0; i < length; i++)
	{
		if (i < index) {
			tmp[i] = arr[i];
		}
		else {
			tmp[i] = arr[i + 1];
		}
	}
	delete[] arr;
	arr = tmp;
}
int main()
{
	int a = 5, b = 10;
	cout << "a :: " << a << " \t b :: " << b << endl;
	Swap(a, b);
	cout << "a :: " << a << " \t b :: " << b << endl;


	int* ptr = new int;
	cout << "address :: " << ptr << " \t value :: " << *ptr << endl;

	/*cout << "Enter size array :: ";
	cin >> size;*/
	//long long* arr;
	/*fill(arr, size);
	print(arr, size, "Print array");*/
	//int i = 0;
	/*while (true)
	{
		arr = new long long(size);
		cout << "array #" << ++i << endl;
	}*/
	size_t size = 10;
	int* arr = new int[size];
	fill(arr, size);
	print(arr, size, "Print array  ");

	pushBack(arr, size, 22);
	print(arr, size, "Print push   ");

	insert(arr, size, 222, 3);
	print(arr, size, "Print insert ");

	remove(arr, size, 4);
	print(arr, size, "Print remove ");


	insert(arr, size, 999, 2222);
	print(arr, size, "Print insert ");
	size = 0;
	int* arr_ = nullptr;
	pushBack(arr_,size , 22);
	print(arr_, size, "Print push   ");
	/*cout << "Test remove --> " << endl;
	while (true)
	{
		remove(arr, size, 0);
		print(arr, size, "Print remove ");
	}*/


	delete [] arr;
	//arr = new int[25];
}


// Створити функцію яка додає елемент в кінець масиву +
// Створити функцію яка додає елемент на початок масиву
// Створити функцію яка додає елемент за вказаною позицією +
// Створити функцію яка видаляє елемент в кінці масиву
// Створити функцію яка видаляє елемент на початку масиву
// Створити функцію яка видаляє елемент за вказаною позицією +