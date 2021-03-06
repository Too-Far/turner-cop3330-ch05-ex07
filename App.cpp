/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ryan Turner
 */

#include "std_lib_facilities.h" 

void RootPrinter(double root1, double root2);

int main()
{
	double a, b, c, d, root, result1, result2;

	cout << "Quadratic Calculator!";
	cout << "Enter value for 'a': ";
	cin >> a;
	cout << "Enter value for 'b': ";
	cin >> b;
	cout << "Enter value for 'c': ";
	cin >> c;

    //Calculation that happens under the square root:
	d = (b * b) - (4 * a * c);


	if (d > 0) {
		root = sqrt(d);
		result1 = (0 - b + root) / (2 * a);
		result2 = (0 - b - root) / (2 * a);

		Output(result1, result2);
	}
	else if (d == 0) {
		result1 = result2 = (0 - b) / (2 * a);

		Output(result1, result2);
	}
	else {
		cout << "No roots have been found for the quadratic equation entered.\n";
	}
	return 0;
}

//Function to print root results:
void Output(double root1, double root2)
{
	if (root1 != root2) {
		cout << "Root number 1 is " << root1 << " and root number 2 is " << root2 << "\n";
	}
	else {
		cout << "The roots are the same. The root is: " << root1 << "\n";
	}
	return;
}