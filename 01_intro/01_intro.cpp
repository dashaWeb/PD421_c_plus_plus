
#include <iostream>
using namespace std;

int main()
{
    // ctrl + shift + /
    // - однорядковий коментар
    /*
     багаторядковий коментар
    */
   /* cout << "Hello World!" << endl;
    cout << "I 'LOVE' \"C++\"" << endl;   

    cout << "Hello World!" << endl;
    cout << "I \n \t \\LOVE\\ \n\t\tC++" << endl;
    //cout << "I " << endl << "LOVE" << endl << "C++" << endl;
    cout << "Hello\b World! \a" << endl;
    cout << "Hello World!" << endl;
    cout << "Hello\b World! \a" << endl;

    cout << R"(
    I
        Love 
                you
                        C++!
)";

    system("pause");*/

    // data types C++
    // number
    //      int
    //      float
    // char
    // boolean

    // type name;
    // firstName

    int number = 125;
    double number_2 = 2.5;
    cout << "Number (int) :: " << number << "\n" << "Number (double) :: " << number_2 << endl;
    char symbol = 'w';
    bool flag = false;
    cout << "Char :: " << symbol << endl;
    cout << "Boolean :: " << boolalpha << flag << endl;
    int number_3 = 45.8;
    cout << "Number_3 :: " << number_3 << endl;

    auto result = number + number_2 + symbol + flag + number_3;
    // int + double + char + bool + int
    cout << "Result :: " << result << endl;
    cout << (int)number_2 << endl;
    cout << (char)206 << endl;
    cout << (int)'A' << endl;
    cout << boolalpha << (bool) -255 << endl;
    cout << boolalpha << (bool)  255 << endl;
    cout << boolalpha << (bool)  0 << endl;

    /*
        +
        -
        *
        /
        %
        ()
    */
}

