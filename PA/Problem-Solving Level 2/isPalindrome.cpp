#include <iostream>;
using namespace std;

// Write a Program to read a number and check if it is 
// Palindrome? Palindrome is a number that
// reads the some from right to left

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
//bool isPalindrome(int n)
//{
//	int n2 = Reversed(n);
//	while (n > 1)
//	{
//		if (n % 10 != n2 % 10)
//			return false;
//		//cout << n % 10 << endl;
//		n = n / 10;
//		n2 = n2 / 10;
//	}
//	return true;
//}
bool isPalindrome(int n)
{
	return n == Reversed(n);
}
void PrintisPalindrome(int n)
{
	if (isPalindrome(n))
		cout << "Yes, it is a Palindrome Number .\n";
	else
		cout << "No, it is Not a Palindrome Number .\n";
}
int main()
{
	PrintisPalindrome(ReadNumbers("Please Enter Number for check : "));
}