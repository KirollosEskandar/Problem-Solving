// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void PrintFromAToZ()
{
	for (int i = 'A'; i <= 'Z'; i++)
	{
		cout << char(i) << " ";
	}
}
int main()
{
	PrintFromAToZ();
	return 0;
}