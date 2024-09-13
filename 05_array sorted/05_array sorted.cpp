#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	const int length = 10;
	int arr[length]{};

	// fill unique array
	for (size_t i = 0; i < length;)
	{
		int number = rand() % 10 + 1;
		bool flag = true;
		for (size_t j = 0; j < i; j++)
		{
			if (arr[j] == number) {
				flag = false;
				break;
			}
		}
		if (flag)
		{
			arr[i] = number;
			i++;
		}
	}

	// print array
	cout << "Print array :: ";
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;

	for (size_t j = 0; j < length - 1; j++)
	{
		for (size_t i = 0; i < length - 1 - j; i++)
		{
			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}

	// print array
	cout << "Sort  array :: ";
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;
	for (size_t j = 0; j < length - 1; j++)
	{
		for (size_t i = 0; i < length - 1 - j; i++)
		{
			if (arr[i] < arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}

	// print array
	cout << "Sort  array :: ";
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;





	cout << "\n\n";
	// fill unique array
	for (size_t i = 0; i < length;)
	{
		int number = rand() % 10 + 1;
		bool flag = true;
		for (size_t j = 0; j < i; j++)
		{
			if (arr[j] == number) {
				flag = false;
				break;
			}
		}
		if (flag)
		{
			arr[i] = number;
			i++;
		}
	}

	// print array
	cout << "Print array :: ";
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;

	// sorted
	for (size_t i = 1; i < length; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 and key < arr[j])
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
	// sort insert array
	cout << "Print array :: ";
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;


	const int length1 = 5, length2 = 10;
	int arr1[length1], arr2[length1], arr3[length2];
	for (size_t i = 0; i < length1; i++)
	{
		arr1[i] = rand() % (10 - -10 + 1) + -10;
		arr2[i] = rand() % (10 - -10 + 1) + -10;
	}
	cout << "Print Array 1 :: ";
	for (size_t i = 0; i < length1; i++)
	{
		cout << arr1[i] << "\t";
	}cout << endl;
	cout << "Print Array 1 :: ";
	for (size_t i = 0; i < length1; i++)
	{
		cout << arr2[i] << "\t";
	}cout << endl;
	int j = 0;

	for (size_t i = 0; i < length1; i++)
	{
		if (arr1[i] > 0)
			arr3[j++] = arr1[i];
		if (arr2[i] > 0)
			arr3[j++] = arr2[i];
	}

	for (size_t i = 0; i < length1; i++)
	{
		if (arr1[i] == 0)
			arr3[j++] = arr1[i];
		if (arr2[i] == 0)
			arr3[j++] = arr2[i];
	}
	for (size_t i = 0; i < length1; i++)
	{
		if (arr1[i] < 0)
			arr3[j++] = arr1[i];
		if (arr2[i] < 0)
			arr3[j++] = arr2[i];
	}




	for (size_t i = 0; i < length; i++)
	{
		cout << arr3[i] << "\t";
	}cout << endl;
}

