// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void Print()
{
	cout << "\n\n\t\t\t\tMultipiaction Table From 1 to 10 \n" << endl;
	cout << "\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10" << endl;

	cout << "----------------------------------------------------------------------------------------------------------------\n";
}

void PrintTable()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t|";
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
}
int main()
{
	Print();
	PrintTable();
}