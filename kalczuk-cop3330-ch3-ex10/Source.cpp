#include <iostream>

using namespace std;

int main()
{
	string operation;
	double num1, num2;
	cout << "Enter the expression: ";
	cin >> operation >> num1 >> num2;
	if (operation == "+") {
		cout << "Addition of two numbers " << num1 << " and " << num2 << " is " << (num1 + num2) << endl;
	}
	else if (operation == "-") {
		cout << "Minus of two numbers " << num1 << " and " << num2 << " is " << (num1 - num2) << endl;
	}
	else if (operation == "*") {
		cout << "Multiplecation of two numbers " << num1 << " and " << num2 << " is " << (num1 * num2) << endl;
	}
	else if (operation == "/") {
		cout << "Divition of two numbers " << num1 << " and " << num2 << " is " << (num1 / num2) << endl;
	}

	return 0;
}
