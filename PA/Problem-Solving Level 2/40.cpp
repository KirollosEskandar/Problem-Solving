#include <iostream>;
#include <vector>;
#include <string>
using namespace std;


/*
	write a program to fill array with number,
	then print distinct numbers to another array;
*/


void PrintArr(int arr[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

bool isFound(int arr[100], int len, int T)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == T)
			return true;
	}
	return false;
}
void AddToArray(int arr[100], int ele, int& len)
{
	arr[len] = ele;
	len++;

}
void CopyArray(int arr[100], int NewArr[100], int length, int& length2)
{
	for (int i = 0; i < length; i++)
	{
		if (!isFound(NewArr,length2,arr[i]))
			AddToArray(NewArr, arr[i], length2);
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[100]= {10,10,10,50,50,70,70,70,70,90}, length = 10;


	// Array 1
	cout << "Array 1 elements: " << endl;
	PrintArr(arr, length);

	/// New Array
	int NewArr[100], length2 = 0;
	CopyArray(arr, NewArr, length, length2);
	cout << "Array 2 Distinct Elements : ";
	PrintArr(NewArr, length2);
}