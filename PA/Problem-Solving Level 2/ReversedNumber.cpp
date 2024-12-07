#include <iostream>
using namespace std;

// Write a Program to read a number and print it reversed

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
/*
int N10(int num)
{
	int n = 1;
	while (num >= 10)
	{
		n *= 10;
		num /= 10;
	}
	return n;
}
*/
int Reversed(int n)
{
	int sum = 0;
	while (n >= 1)
	{
		sum = sum * 10 + (n % 10);
		n = n / 10;
	}
	return sum;
}

int main()
{
	cout << "Reversed : " << Reversed(ReadNumbers()) << endl;
}