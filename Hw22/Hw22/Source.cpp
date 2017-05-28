#include "Function.h"
#include <iostream>

using namespace std;

void main()
{
	////1-2
	//int length;
	//cout << "Enter size of array: ";
	//cin >> length;
	//int *arr = new int[length];
	//Function(arr, length);
	//delete[]arr;

	//3
	int length;
	cout << "Enter size of array: ";
	cin >> length;
	int *arr = new int[length];
	Function(arr, length);
	delete[]arr;
}