#include <iostream>;
#include <vector>;
#include <string>
using namespace std;

//Write a program to fill array wih size 100 
// Numbers from 1 to 100 , copy only prime numbers
// to another array and print it


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
bool isPrime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int CopyArrayOnlyPrime(int arr[100], int NewArr[100], int length)
{
	int len = 0;
	for (int i = 0; i < length; i++)
	{
		if (isPrime(arr[i]))
		{
			NewArr[len] = arr[i];
			len++;
		}
	}
	return len;
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[100], length = read("Please Enter size arr : ");
	FillArr(arr,length);
	cout << "Array 1 Elements : ";
	PrintArr(arr, length);

	/// New Array
	int NewArr[100];
	int len = CopyArrayOnlyPrime(arr, NewArr, length);
	cout << "Array 2 Elements : ";
	PrintArr(NewArr, len);

}