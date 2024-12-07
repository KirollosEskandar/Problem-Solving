#include <iostream>;
#include <vector>;
#include <string>
using namespace std;


/*
	write a program to fill array with max size 100
	with random with random numbers from 1 to 100
	then print the count of Even numbers
*/

int read()
{
	int n;
	do
	{
		cout << "Enter Size Array : ";
		cin >> n;
	} while (n < 1);
	return n;
}

enum EnOddOrEven
{
	Odd = 1, Even = 2
};
EnOddOrEven isOddOrEven(int n)
{
	if (n % 2 == 0)
		return EnOddOrEven::Even;
	else
		return EnOddOrEven::Odd;
}

void CountEven(int arr[100], int len)
{
	int Sum = 0;
	for (int i = 0; i < len; i++)
	{
		if(isOddOrEven(arr[i]) == EnOddOrEven::Even)
			Sum++;
	}
	cout << "Even Numbers count is : " << Sum << endl;
}

int RandomNum(int from = 0, int to = 100)
{
	return rand() % (to - from + 1) + from;
}
void FillArrayWithRandom(int arr[100], int len)
{
	for (int i = 0; i < len; i++)
	{
		arr[i] = RandomNum();
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


int main()
{
	srand((unsigned)time(NULL));
	int arr[100], length = read();

	FillArrayWithRandom(arr, length);

	cout << "Array Elenments: " << endl;
	PrintArr(arr, length);

	CountEven(arr, length);

}