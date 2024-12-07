#include <iostream>;
#include <vector>;
#include <string>
using namespace std;

//Write a program to fill array wih size 100 
// Numbers from 1 to 100 Than print Min Of random Number


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
	cout << "Array Elements : ";
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int MinNumber(int arr[100], int length)
{
	int MIn = 1000;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] < MIn)
			MIn = arr[i];
	}
	return MIn;
}
int main()
{
	srand((unsigned)time(NULL));
	//cout << randamNumber() << endl;
	int arr[100], length = read("Please Enter size arr : ");
	FillArr(arr,length);
	PrintArr(arr, length);
	cout << "Min Number is : " << MinNumber(arr, length) << endl;

}