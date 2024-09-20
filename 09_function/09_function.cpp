#include <iostream>
using namespace std;


void printMessage(int age, string name = "Anonim")
{
	cout << "Hello " << name << endl;
}

int sum(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mult(int a, int b)
{
	return a * b;
}
double divi(int a, int b)
{
	return b == 0 ? 0 : (double)a / b;
	/*if (b == 0)
		return 0;
	return (double)a / b;*/
}

double calculate(int a, int b, char op)
{
	switch (op)
	{
	case '+':
		return sum(a, b); 
	case '-':
		return sub(a, b);
	case '*':
		return mult(a, b);
	case '/':
		return divi(a, b);
	}
}

int main()
{
	printMessage(1);
	printMessage(15);
	int res = sum(2, 3);
	cout << res << endl;
	cout << sum(5, 7) << endl;
	cout << sub(5, 7) << endl;
	cout << mult(5, 7) << endl;
	cout << divi(5, 7) << endl;

	while (true)
	{
		int one, two;
		char op;
		cout << "Enter math expression :: ";
		cin >> one >> op >> two;
		cout << one << " " << op << " " << two << " = " << calculate(one, two, op) << endl;
	}
}
