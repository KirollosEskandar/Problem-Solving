#include <iostream>;
using namespace std;

// Write a Program to read a number
// , and print it in order from lefr to right

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
int Reversed(int n)
{
	int T = 0 , Reminder = 0;
	while (n >= 1)
	{
		Reminder = n % 10;
		n /= 10;
		T = T * 10 + Reminder;
	}
	return T;
}
void PrintDigitInOrder(int n)
{
	while (n > 1)
	{
		cout << n % 10 << endl;
		n = n / 10;
	}
}
int main()
{
	int Numbers = ReadNumbers("Please Enter Numbers : ");
	Numbers = Reversed(Numbers);
	cout << Numbers << endl;
	PrintDigitInOrder(Numbers);
}