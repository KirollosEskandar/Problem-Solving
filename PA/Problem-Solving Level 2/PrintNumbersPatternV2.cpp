#include <iostream>;
using namespace std;

// Write a Program to read a number and print Inverted Pattern as follow
//1
//22
//333
//4444
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
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
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