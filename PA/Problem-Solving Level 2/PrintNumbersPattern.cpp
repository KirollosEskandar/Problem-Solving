#include <iostream>;
using namespace std;

// Write a Program to read a number and print Inverted Pattern as follow

int ReadNumbers(string mesg)
{
	int n;
	do
	{
		cout << mesg;
		cin >> n;
	} while (n < 1);
	return n;
}
void PrintNumbersPattern(int n)
{
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}
int main()
{
	PrintNumbersPattern(ReadNumbers("Please Enter Number : "));
}