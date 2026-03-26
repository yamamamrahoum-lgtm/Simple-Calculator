#include <iostream>
using namespace std;
int main()
{
	int sum, sub, mull, mod;
	float div;
	int num1;
	int num2;

	cout << "please enter the ferst number:" << endl;
	cin >> num1;

	cout << "please enter the second number:" << endl;
	cin >> num2;

	sum = num1 + num2;
	sub = num1 - num2;
	mull = num1 * num2;
	div = num1 / num2;
	mod = num1 % num2;

	cout << "sum=" << sum << endl;
	cout << "sub=" << sub << endl;
	cout << "mull=" << mull << endl;
	cout << "div=" << div << endl;
	cout << "mod=" << mod << endl;


	return 0;

}