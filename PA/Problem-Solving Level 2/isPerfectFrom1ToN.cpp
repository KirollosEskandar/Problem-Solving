#include <iostream>
using namespace std;
// Write Program Check Number is Perfect Or NO
// Note : Perfect Number = sum(all divisors)

// Print Perfect Number From 1 To N
int ReadNumber()
{
	int n;
	do
	{
		cout << "Please Enter N For Check from 1 to N Perfect Or Not : ";
		cin >> n;
	} while (n < 1);
	return n;
}
bool isPerfect(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	return sum == n;
}
void PrintPerfectOrNot(int n)
{
	if (isPerfect(n))
		cout << n << " Yes is Perfect . " << endl;
	else
		cout << n << " NO is Not Perfect ." << endl;
}

void PrintToN(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if(isPerfect(i))
			PrintPerfectOrNot(i);
	}
}
int main()
{
	PrintToN(ReadNumber());
}