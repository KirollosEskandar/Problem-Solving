#include <iostream>;
using namespace std;
void ReadTwoNum(int& n1, int& n2)
{
	cout << "Please Enter Your First Number : ";
	cin >> n1;
	cout << "Please Enter Your Secuond Number : ";
	cin >> n2;
}

void WhatMax(int n1, int n2)
{
	if (n1 > n2)
		cout << "Number 1 is > Number 2 . " << endl;
	else if(n1 < n2)
		cout << "Number 2 is > Number 1 . " << endl;
	else
		cout << "Number 1 is == Number 2 . " << endl;
}
int main()
{
	int n1, n2;
	ReadTwoNum(n1, n2);
	WhatMax(n1, n2);
	return 0;
}