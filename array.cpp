// Single dimensional array implementation using C++
// Watch previous video for basics of array
// string languages[5] = {"English", "Hindi", "Marathi", "Telagu", "Tamil"};

#include<iostream>
using namespace std;

int main()
{
	string languages[5];

	cout << "Enter five different languages: ";

	for (int i = 0; i < 5; i++)
	{
		cin >> languages[i];
	}

	cout << "Languages from array are as following" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << languages[i] << ", ";
	}

	cout << endl;

	return 0;
}

