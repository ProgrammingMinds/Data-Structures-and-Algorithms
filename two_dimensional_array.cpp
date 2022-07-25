// Implementation of two dimensional array using C++

// Array that stores multiple elements of same data type into single unit in tabular manner 
// known as multidimensional array

// Two dimensional array example

// method 1 - 
// int array[2][3] = {10, 20, 30, 40, 50, 60};

// method 2 - 
// int array[2][3] = {{10, 20, 30}, 
//                   {40, 50, 60}};

// Tabular format indexing
// 
//                 column[0]           column[1]              column[2]
//  row[0]     array[0][0] = 10      array[0][1] = 20      array[0][2] = 30
//  row[1]     array[1][0] = 40      array[1][1] = 50      array[1][2] = 60

#include<iostream>
using namespace std;

int main()
{
	int array[2][3];

	cout << "Enter 6 integer elements: ";

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3;j++)
		{
			cin >> array[i][j];
		}
	}

	cout << endl << "Two-Dimensional array" << endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3;j++)
		{
			cout << array[i][j] << ", ";
		}

		cout << endl;
	}



	return 0;
}



