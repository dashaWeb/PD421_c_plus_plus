﻿#include <iostream>
//#include <ctime>
using namespace std;
//Необхідно відсортувати перші дві третини
//масиву в порядку зростання якщо середнє арифметичне
//
//всіх елементів більше нуля; інакше — лише першу тре -
//тину.Іншу частину масиву не сортувати, а розташувати
//
//у зворотному порядку.

int main()
{
    srand(time(0));

    const int length = 15;
    int arr[length]{};

    // fill array
    int min = -20, max = 20;
    for (size_t i = 0; i < length; i++)
    {
        arr[i] = min + rand() % (max - min + 1);
    }

    // print array
    for (size_t i = 0; i < length; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    // find sum
    int sum = 0;
    for (size_t i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    double average = (double)sum / length;
    cout << average << endl;
 
    int middle = length / 3;
    if (average > 0)
        middle = middle * 2;

    for (size_t i = 0; i < length; i++)
    {
        if (i == middle)
            cout << " | ";
        cout << arr[i] << "\t";
    }
    cout << endl;


    for (size_t i = 1; i < middle; i++)
    {
        int j = i - 1;
        int key = arr[i];
        while (j >= 0 and key < arr[j])
        {
            arr[j + 1] = arr[j]; 
            j--;
        }
        arr[j + 1] = key;
    }

    for (size_t i = middle, j = 0; j < (length - middle) / 2; i++, j++)
    {
        int temp = arr[i];
        arr[i] = arr[length - 1 - j];
        arr[length - 1 - j] = temp;
    }

    for (size_t i = 0; i < length; i++)
    {
        if (i == middle)
            cout << " | ";
        cout << arr[i] << "\t";
    }
    cout << endl;
}
