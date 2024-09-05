#include <iostream>
//using namespace std;
using std::cout;
using std::cin;
using std::string;
using std::endl;

enum Color {
	RED = 1, GREEN, BLUE, PURPLE, YELLOW
};
int main()
{

	/*int day;
	cout << "Enter number of day --> ";
	cin >> day;*/
	/*if (day == 1) {
		cout << "\t =============== Monday =============== " << endl;
	}
	else if (day == 2) {
		cout << "\t =============== Tuesday =============== " << endl;
	}
	else {
		cout << "\t =============== Error =============== " << endl;
	}*/

	/*if (day == 1)
		cout << "\t =============== Monday =============== " << endl;
	else if (day == 2)
		cout << "\t =============== Tuesday =============== " << endl;
	else
		cout << "\t =============== Error =============== " << endl;*/

		//string login, password;
		//cout << "Enter login --> ";
		//cin >> login;

		//if (login == "Admin" or login == "admin")
		//{
		//	// enter password
		//	cout << "Enter passwrd --> ";
		//	cin >> password;
		//	if (password == "STEP") {
		//		cout << "\t Welcome" << endl;
		//	}
		//	else if (password == "cancel")
		//	{
		//		cout << "\t Password cancelled" << endl;
		//	}
		//	else {
		//		cout << "\t Error password" << endl;
		//	}
		//}
		//else if (login == "cancel")
		//{
		//	cout << "\t Login cancelled" << endl;
		//}
		//else {
		//	cout << "\t I don't know you" << endl;
		//}

		/*int a, b, c, d, e;
		cout << "Enter numbers --> ";
		cin >> a >> b >> c >> d >> e;
		int max = a;
		if (max < b) {
			max = b;
		}
		if (max <c) {
			max = c;
		}
		if (max < d) {
			max = d;
		}
		if (max < e) {
			max = e;
		}
		cout << "Max number :: " << max << endl;*/


		/*int day;
		cout << "Enter number of day --> ";
		cin >> day;
		switch (day)
		{
		default:
			cout << "\t =============== Error =============== " << endl;
			break;
		case 1:
			cout << "\t =============== Monday =============== " << endl;
			break;
		case 2:
			cout << "\t =============== Tuesday =============== " << endl;
			break;
		case 3:
			cout << "\t =============== Wednesday =============== " << endl;
			break;
		}*/
		/*int month;
		cout << "Enter number of month --> ";
		cin >> month;
		switch (month)
		{
		case 4: case 6: case 9: case 11:
			cout << "30 days" << endl;
			break;
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			cout << "31 days" << endl;
			break;
		case 2:
			int year;
			cout << "Enter year --> ";
			cin >> year;
			if (year % 4 == 0 and year % 100 != 0 or year % 400 == 0)
				cout << "29 days" << endl;
			else
				cout << "28 days" << endl;
			break;
		default:
			cout << "\t =============== Error =============== " << endl;
		}*/
	int color;
	cout << R"( 
				1 - RED 
				2 - GREEN 
				3 - BLUE 
				4 - PURPLE
				5 - YELLOW
					Enter number ::  )";
	cin >> color;
	switch (color)
	{
	case RED:
		system("color 47");
		break;
	case GREEN:
		system("color 27");
		break;
	case BLUE:
		system("color 17");
		break;
	case PURPLE:
		system("color 57");
		break;
	case YELLOW:
		system("color 67");
		break;
	}
}

