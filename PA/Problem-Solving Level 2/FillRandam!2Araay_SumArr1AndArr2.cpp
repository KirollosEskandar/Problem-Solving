#include <iostream>;
#include <vector>;
#include <string>
using namespace std;

//Write a program to fill array wih size 100 
// Numbers from 1 to 100 , sum their elements in a third array and
// Print the Results


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
void SumArr1AndArr2(int arr1[100], int arr2[100], int arrSum[100], int length)
{
	for (int i = 0; i < length; i++)
	{

		arrSum[i] = arr2[i] + arr1[i];
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int arr1[100], length = read("Please Enter size arr : ");
	FillArr(arr1,length);
	cout << "Array 1 Elements : ";
	PrintArr(arr1, length);

	// array 2
	int arr2[100], arrSum[100];
	cout << "Array 2 Elements : ";
	FillArr(arr2, length);
	PrintArr(arr2, length);

	SumArr1AndArr2(arr1, arr2, arrSum, length);
	cout << "Sum of Array 1 and Array 2 Elements : ";

	PrintArr(arrSum, length);


}