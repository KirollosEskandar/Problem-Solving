#include <iostream>;
using namespace std;
void ReadTwoNum(int& n1, int& n2, int &n3)
{
	cout << "Please Enter Your First Number : ";
	cin >> n1;
	cout << "Please Enter Your Secuond Number : ";
	cin >> n2;
	cout << "Please Enter Your Thired Number : ";
	cin >> n3;
}

void WhatMax(int n1, int n2, int n3)
{
	if (n1 > n2 && n1 > n3)
		cout << "Number 1 is Biger then 2 3 " << endl;
	else if (n2 > n1 && n2 > n3)
		cout << "Number 2 is Biger then 1 3 " << endl;
	else
		cout << "Number 3 is Biger then 1 2 " << endl;
}
int main()
{
	int n1, n2, n3;
	ReadTwoNum(n1, n2, n3);
	WhatMax(n1, n2, n3);
	return 0;
}