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

//3
//void Fill(int **arr, int row, int col);
//void Find(int **arr, int row, int col, int &odd, int &even, int &arif);
//void COut(int **arr, int row, int col);
//
//void Function(int **arr, int row, int col)
//{
//	srand(time(0));
//	int odd = 0, even = 0, arif = 0;
//	Fill(arr, row, col);
//	Find(arr, row, col, odd, even, arif);
//	COut(arr, row, col);
//	arif /= row * col;
//	cout << endl;
//	cout << odd << endl;
//	cout << even << endl;
//	cout << arif<< endl;
//}
//
//void Fill(int **arr, int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//			arr[i][j] = rand() % 40 - 15;
//	}
//}
//
//void Find(int **arr, int row, int col, int &odd, int &even, int &arif)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			if (arr[i][j] % 2 == 0)
//				even++;
//			else if (arr[i][j] % 2 != 0)
//				odd++;
//			arif += arr[i][j];
//		}
//	}
//}
//
//void COut(int **arr, int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//			cout << arr[i][j] << "\t";
//		cout << endl;
//	}
//}

//4
int* Create(int &length);
void Delete(int *arr, int &length);
void Fill(int *arr, int &length);
void COut(int *arr, int &length);
int* Increase(int *arr, int &length, int num);
void Add(int *arr, int &length, int &num, int &index);
void Remove(int *arr, int &length, int &index);

void Function()
{
	srand(time(0));
	int key, length = 0, num = 0, index;
	int *arr;
	while (true)
	{
		system("cls");
		cout << "1 - create, 2 - fill, 3 - cout, 4 - delete, 5 - increase arr, 6 - add, 7 - remove\n";
		key = getch();
		if (key == '1')
			arr = Create(length);
		if (key == '2')
			Fill(arr, length);
		if (key == '3')
			COut(arr, length);
		if (key == '4')
			Delete(arr, length);
		if (key == '5')
		{
			cin >> num;
			arr = Increase(arr, length, num);
		}
		if (key == '6')
		{
			arr = Increase(arr, length, num);
			cout << "Enter number and index of array : ";
			cin >> num >> index;
			index--;
			Add(arr, length, num, index);
		}
		if (key == '7')
		{
			cout << "Enter index of array : ";
			cin >> index;
			index--;
			Remove(arr, length, index);
		}
		if (key == 27 )
			break;
	}
}

int* Create(int &length)
{
	cin >> length;
	int *arr = new int[length];
	return arr;
}

void Delete(int *arr, int &length)
{
	delete[] arr;
	length = 0;
}

void Fill(int *arr, int &length)
{
	for (int i = 0; i < length; i++)
		arr[i] = rand() % 20;
}

int* Increase(int *arr, int &length, int num)
{
	int *tempArr = new int[length + 1];
	for (int i = 0; i < length; i++)
		tempArr[i] = arr[i];
	tempArr[length] = num;
	delete[]arr;
	arr = tempArr;
	length++;
	return arr;
}

void Add(int *arr, int &length, int &num, int &index)
{
	int save1 = 0, save2 = 0;
	for (int i = 0; i < length; i++)
	{		
		if (i == index)
		{
			save1 = arr[i];
			arr[i] = num;
		}
		if (i >= index && i != length - 1)
		{
			save2 = arr[i + 1];
			arr[i + 1] = save1;
			save1 = save2;
		}
	}
}

void Remove(int *arr, int &length, int &index)
{
	int save1 = 0, save2 = 0;
	for (int i = 0; i < length; i++)
	{
		if (i >= index && i != length - 1)
		{
			arr[i] = 0;
			arr[i] = arr[i + 1];
			arr[i + 1] = 0;
		}
		else if ( i == index && index == length - 1)
			arr[i] = 0;
	}
}

void COut(int *arr, int &length)
{
	for (int i = 0; i < length; i++)
		cout << arr[i] << '\t';
	system("pause");
}
