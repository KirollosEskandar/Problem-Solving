#include <iostream>;
using namespace std;

// Write a Program to read a number and print Inverted Pattern
// letter pattern as follows
//ccc
//bb
//a
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
void PrintletterPattern(int n)
{
	for (int i = n-1; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << char('A' + i);
		}
		cout << endl;
	}
}
int main()
{
	PrintletterPattern(ReadNumbers("Please Enter Number : "));
}