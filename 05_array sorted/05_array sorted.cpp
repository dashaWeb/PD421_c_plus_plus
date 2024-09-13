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

}

