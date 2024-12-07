// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int read(string msg)
{
	int t;
	cout << msg;
	cin >> t;
	return t;
}

int HowMonth(int l, int m)
{
	return l / m;
}
int main()
{
	int loanAcc = read("Please enter Loan Acc : "),
		M = read("Please enter Pay Month : ");
	cout << "Total = " << HowMonth(loanAcc, M) << endl;
	return 0;
}