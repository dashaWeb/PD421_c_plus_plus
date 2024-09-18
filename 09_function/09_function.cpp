#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

//???????? 1
vector<vector<int>> create_array1(int n, int rows, int cols) {
    vector<vector<int>> array(rows, vector<int>(cols, 0));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 && j == 0) {
                array[i][j] = n;
            }
            else if (j == 0) {
                array[i][j] = array[i - 1][cols - 1] * 2;
            }
            else {
                array[i][j] = array[i][j - 1] * 2;
            }
        }
    }
    return array;
}

//???????? 2
vector<vector<int>> create_array2(int n, int rows, int cols) {
    vector<vector<int>> array(rows, vector<int>(cols, 0));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 && j == 0) {
                array[i][j] = n;
            }
            else if (j == 0) {
                array[i][j] = array[i - 1][cols - 1] + 1;
            }
            else {
                array[i][j] = array[i][j - 1] + 1;
            }
        }
    }
    return array;
}

//???????? 3
vector<vector<int>> create_random_array(int rows, int cols) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 9);

    vector<vector<int>> array(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = dis(gen);
        }
    }
    return array;
}

vector<vector<int>> shift_array(vector<vector<int>>& array, const string& direction, int shifts) {
    int rows = array.size();
    int cols = array[0].size();

    if (direction == "right" || direction == "left") {
        for (auto& row : array) {
            if (direction == "right") {
                rotate(row.rbegin(), row.rbegin() + shifts, row.rend());
            }
            else {
                rotate(row.begin(), row.begin() + shifts, row.end());
            }
        }
    }
    else if (direction == "down" || direction == "up") {
        if (direction == "down") {
            rotate(array.rbegin(), array.rbegin() + shifts, array.rend());
        }
        else {
            rotate(array.begin(), array.begin() + shifts, array.end());
        }
    }
    return array;
}

void print_array(const vector<vector<int>>& array) {
    for (const auto& row : array) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    while (true) {
        cout << "\n???????? ????????:\n";
        cout << "1. ???????? 1\n";
        cout << "2. ???????? 2\n";
        cout << "3. ???????? 3\n";
        cout << "4. ?????\n";

        int choice;
        cout << "??? ?????: ";
        cin >> choice;

        if (choice == 1) {
            //???????? 1
            int n, rows, cols;
            cout << "??????? ?????: ";
            cin >> n;
            cout << "??????? ????????? ??????: ";
            cin >> rows;
            cout << "??????? ????????? ????????: ";
            cin >> cols;
            auto result = create_array1(n, rows, cols);
            cout << "\n?????????:\n";
            print_array(result);
        }
        else if (choice == 2) {
            //???????? 2
            int n, rows, cols;
            cout << "??????? ?????: ";
            cin >> n;
            cout << "??????? ????????? ??????: ";
            cin >> rows;
            cout << "??????? ????????? ????????: ";
            cin >> cols;
            auto result = create_array2(n, rows, cols);
            cout << "\n?????????:\n";
            print_array(result);
        }
        else if (choice == 3) {
            //???????? 3
            int rows, cols;
            cout << "??????? ????????? ??????: ";
            cin >> rows;
            cout << "??????? ????????? ????????: ";
            cin >> cols;
            auto array = create_random_array(rows, cols);
            cout << "\n?????????? ?????:\n";
            print_array(array);

            string direction;
            int shifts;
            cout << "???????? ???????? (right/left/up/down): ";
            cin >> direction;
            cout << "??????? ????????? ??????: ";
            cin >> shifts;

            auto shifted_array = shift_array(array, direction, shifts);
            cout << "\n????? ????? ?????:\n";
            print_array(shifted_array);
        }
        else if (choice == 4) {
            cout << "????? ?? ???????????? ????????!\n";
            break;
        }
        else {
            cout << "???????? ?????. ????????? ?? ???.\n";
        }
    }
    return 0;
}