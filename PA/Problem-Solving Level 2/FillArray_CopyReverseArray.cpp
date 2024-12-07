#include <iostream>;
#include <vector>;
#include <string>
using namespace std;

//Write a program to fill array wih size 100 
// Numbers from 1 to n 
// then print it ,after that shuffle this array and print it
// after suffle


int read(string Mesg)
{
	int n;
	do
	{
		cout << Mesg;
		cin >> n;
	} while (n < 1);
	return n;
}

int randamNumber(int from = 1, int to = 100)
{
	return rand() % (to - from +1 ) + from;
}

void FillArr(int arr[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = randamNumber();
	}
}

void PrintArr(int arr[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void CopyReverseArray(int arr[100], int arr2[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		arr2[i] = arr[length - (i + 1)];
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr1[100], length = read("Please Enter size arr : ");
	FillArr(arr1,length);
	cout << "Array 1 elements: ";
	PrintArr(arr1, length);

	int arr2[100];
	CopyReverseArray(arr1,arr2, length);
	cout << "Array 2 elements : ";
	PrintArr(arr2, length);


}