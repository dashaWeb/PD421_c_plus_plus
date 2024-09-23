#include <iostream>
using namespace std;

template <typename T>
void uniqValue(T arr[], size_t length, int min = 1, int max = 10)
{
    bool flag;
    for (size_t i = 0; i < length;)
    {
        int number = min + rand() % (max - min + 1);
        flag = true;
        for (size_t j = 0; j < i; j++)
        {
            if (arr[j] == number)
            {
                flag = false;
                break;
            }
        }
        if (flag) {
            arr[i] = number;
            i++;
        }
    }
}

template <typename T>
void printArray(T arr[], size_t length, string prompt = "")
{
    if (!prompt.empty())
    {
        cout << prompt << " :: \t ";
    }
    for (size_t i = 0; i < length; i++)
    {
        cout << arr[i] << "\t";
    }cout << endl;
}

template <typename T>
void quickSort(T arr[], int left, int right)
{
    int temp_l = left;
    int temp_r = right;
    T pivot = arr[left];
    while (left < right)
    {
        while (arr[right] > pivot and left < right) right--;
        if (left != right)
        {
            arr[left] = arr[right];
            left++;
        }
        while (arr[left] < pivot and left < right) left++;
        if (left != right)
        {
            arr[right] = arr[left];
            right--;
        }
    }
    arr[left] = pivot;
    int index = left;
    left = temp_l;
    right = temp_r;
    if (index > left)
    {
        quickSort(arr, left, index - 1);
    }
    if (index < right)
    {
        quickSort(arr, index + 1, right);
    }
}

template<typename T>
int linearSearch(T arr[], size_t length, T key)
{
    for (size_t i = 0; i < length; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

template <typename T>
int binarySearch(T arr[], int left, int right, T key)
{
    if (left > right) return -1;
    int mid = (left + right) / 2;
    if (arr[mid] == key) return mid;

    if (key < arr[mid])
    {
        binarySearch(arr, left, mid - 1, key);
    }
    else if(key > arr[mid])
    {
        binarySearch(arr, mid + 1, right, key);
    }
}
int main()
{
    srand(time(0));

    const int size = 10;
    int arr[size]{};
    uniqValue(arr, size);
    printArray(arr, size, "Print unique array");
    quickSort(arr, 0, size - 1);
    printArray(arr, size, "Print sorted array");
    cout << linearSearch(arr, size, 2) << endl;
    cout << linearSearch(arr, size, 22) << endl;
    cout << binarySearch(arr, 0, size-1, 2) << endl;
    cout << binarySearch(arr, 0, size-1, 22) << endl;

}
