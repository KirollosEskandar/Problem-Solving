#include <iostream>;
#include <vector>;
#include <string>
using namespace std;

//Write a program to fill array wih size 100 
// Numbers from 1 to 100 , copy it to another array and print it


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
	return rand() % (to - from + 1) + from;
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

void AddToArray(int arr[100], int ele, int &len)
{
	arr[len] = ele;
	len++;
}
void CopyArray(int arr[100], int NewArr[100], int length, int &length2)
{
	for (int i = 0; i < length; i++)
	{
		AddToArray(NewArr, arr[i], length2);
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[100], length = read("Please Enter size arr : ");
	FillArr(arr, length);
	cout << "Array 1 Elements : ";
	PrintArr(arr, length);

	/// New Array
	int NewArr[100], length2 = 0;
	CopyArray(arr, NewArr, length, length2);
	cout << "Array 2 Elements : ";
	PrintArr(NewArr, length);
}