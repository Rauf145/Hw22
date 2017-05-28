#include <iostream>
#include <time.h>
#include <conio.h>
#include <Windows.h>

using namespace std; 

//1
//void Fill(int *arr, int length);
//void Find(int *arr, int length, int &sum, int &mult);
//void COut(int *arr, int length);
//
//void Function(int *arr, int length)
//{
//	srand(time(0));
//	int sum = 0, mult = 1;
//	Fill(arr, length);
//	Find(arr, length, sum, mult);
//	COut(arr, length);
//	cout << sum << endl;
//	cout << mult << endl;
//}
//
//void Fill(int *arr, int length)
//{
//	for (int i = 0; i < length; i++)
//		arr[i] = rand() % 40;
//}
//
//void Find(int *arr, int length, int &sum, int &mult)
//{
//	for (int i = 0; i < length; i++)
//	{
//		sum += arr[i];
//		mult *= arr[i];
//	}
//}
//
//void COut(int *arr, int length)
//{
//	for (int i = 0; i < length; i++)
//		cout << arr[i] << "\t";
//	cout << endl;
//}

//2
//void Fill(int *arr, int length);
//void Find(int *arr, int length, int &negative, int &positive, int &zero);
//void COut(int *arr, int length);
//
//void Function(int *arr, int length)
//{
//	srand(time(0));
//	int negative = 0, positive = 0, zero = 0;
//	Fill(arr, length);
//	Find(arr, length, negative, positive, zero);
//	COut(arr, length);
//	cout << negative << endl;
//	cout << positive << endl;
//	cout << zero << endl;
//}
//
//void Fill(int *arr, int length)
//{
//	for (int i = 0; i < length; i++)
//		arr[i] = rand() % 40 - 15;
//}
//
//void Find(int *arr, int length, int &negative, int &positive, int &zero)
//{
//	for (int i = 0; i < length; i++)
//	{
//		if (arr[i] < 0)
//			negative++;
//		else if (arr[i] > 0)
//			positive++;
//		else
//			zero++;
//	}
//}
//
//void COut(int *arr, int length)
//{
//	for (int i = 0; i < length; i++)
//		cout << arr[i] << "\t";
//	cout << "\n" << endl;
//}