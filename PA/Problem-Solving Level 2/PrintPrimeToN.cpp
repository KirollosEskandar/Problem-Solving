#include <iostream>
using namespace std;

enum EnPrimeOrNot {Prime = 1, NoPrime = 2};
int ReadNumber()
{
	int n;
	do
	{
		cout << "Please Enter N For Check Prime : ";
		cin >> n;
	} while (n < 1);
	return n;
}

EnPrimeOrNot isPrime(int n)
{
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return EnPrimeOrNot::NoPrime;
	}
	return EnPrimeOrNot::Prime;
}

void PrintPrimeToN(int n)
{
	for (int i = 1; i < n; i++)
	{
		if (isPrime(i) == EnPrimeOrNot::Prime)
			cout << "Prime : " << i << endl;
	}
}
int main()
{
	PrintPrimeToN(ReadNumber());
}