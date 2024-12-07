#include <iostream>
using namespace std;

// Write Program to read a number and print it in a reversd order

 
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
void PrintDigits(int n)
{
	while (n >= 1)
	{
		cout << n % 10 << endl;
		n = n / 10;
	}
}

int main()
{
	PrintDigits(ReadNumbers());
}