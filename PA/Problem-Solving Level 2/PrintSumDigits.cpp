#include <iostream>
using namespace std;

// Write Program to read a number and print the Sum of its Digits

 
int ReadNumbers()
{
	int n;
	do
	{
		cout << "Please Enter Numbers : ";
		cin >> n;
	} while (n < 1);
	return n;
}
int PrintSumDigits(int n)
{
	int Sum = 0;
	while (n >= 1)
	{
		Sum += n % 10;
		n = n / 10;
	}
	return Sum;
}

int main()
{
	cout << "Sum Of Digits = " << PrintSumDigits(ReadNumbers()) << endl;
}