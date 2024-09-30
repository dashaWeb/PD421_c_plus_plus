#include <iostream>
using namespace std;

template <typename T>
void fill(T** arr, const size_t& row, const size_t& col, int min = 1, int max = 10)
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            arr[i][j] = min + rand() % (max - min + 1);
        }
    }
}
template <typename T>
void print(T** arr, const size_t& row, const size_t& col, string prompt = "")
{
    if (!prompt.empty())
        cout << prompt << " :: " << endl;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }cout << endl;
    }
}
template <typename T>
void insert(T**& arr, int& row, const size_t& col, const size_t& index)
{
    if (index > row) {
        cout << "Error! out range !!" << endl;
        return;
    }
    T** tmp = new int* [row + 1];
    for (size_t i = 0; i < row; i++)
    {
        if (i < index)
        {
            tmp[i] = arr[i];
        }
        else {
            tmp[i + 1] = arr[i];
        }
    }
    tmp[index] = new int[col] {};
    delete[] arr;
    row++;
    arr = tmp;
}
int main()
{
    int row = 4, col = 5;

    // create array
    int** arr = new int*[row];
    /*arr[0] = new int[col];
    arr[1] = new int[col];*/
    for (size_t i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    fill(arr, row, col);
    print(arr, row, col, "Print array");

    insert(arr, row, col, 2);
    print(arr, row, col, "Print array after insert ROW");






    for (size_t i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[]arr;


    //test
    /*int z = 2, y = 3, x = 4;
    int*** mas = new int** [z];
    for (size_t i = 0; i < z; i++)
    {
        mas[i] = new int* [y];
        for (size_t j = 0; j < y; j++)
        {
            mas[i][j] = new int[x];
        }
    }
    for (size_t i = 0; i < z; i++)
    {
        for (size_t j = 0; j < y; j++)
        {
            for (size_t q = 0; q < x; q++)
            {
                mas[i][j][q] = rand() % 10 + 1;
            }
        }
    }
    for (size_t i = 0; i < z; i++)
    {
        cout << "block " << i + 1 << endl;
        for (size_t j = 0; j < y; j++)
        {
            for (size_t q = 0; q < x; q++)
            {
                cout << mas[i][j][q] << "\t";
            }cout << endl;
        }
        cout << endl;
    }*/
}

//Завдання 1. Написати функцію, що додає рядок двовимірному масиву в кінець.
//
//Завдання 2. Написати функцію, що додає рядок двовимірному масиву в початок.
//
//Завдання 3. Написати функцію, що додає рядок двовимірному масиву в зазначену позицію.
//
//Завдання 4. Написати функцію, що видаляє рядок двовимірному масиву в кінеці.
//
//Завдання 5. Написати функцію, що видаляє рядок двовимірному масиву на початку.
// 
//Завдання 6. Написати функцію, що видаляє рядок двовимірного масиву за вказаним номером.