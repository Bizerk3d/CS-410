// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int main() {
	
	int i, j, rows, space;
	cout << " Enter number of rows\n " << endl;
	cin >> rows;
	space = rows - 1;

	for (i = 1; i <= rows; i++) {
		for (j = 1; j <= space; j++) 
			cout << " ";
		space--;
		for (j = 1; j <= (2 * i - 1); j++) 
			cout << "*";
		cout << endl;
	}
	space = 1;
	for (i = 1; i <= (rows - 1); i++) {
		for (j = 1; j <= space; j++)
			cout << " ";
		space++;
		for (j = 1; j <= (2 * (rows - i) - 1); j++)
			cout << "*";
		cout << endl;
	}
	cout << endl;
	return 0;
}

