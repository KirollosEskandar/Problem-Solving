// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int read()
{
	int t;
	cout << "Please Enter Pin code : ";
	cin >> t;
	return t;
}

 bool PrintATM()
{
	 int Pin, counter = 0;
	 do
	 {
		 counter++;
		 Pin = read();
		 if (Pin == 1234)
		 {
			 return 1;
		 }
		 else
		 {
			 system("color 4F");
			 cout << "Your Enter Pin Wrong . \n";
		 }
	 } while (counter < 3);
	 return 0;
}
int main()
{
	
	if (PrintATM())
	{
		system("color 2F");
		cout << "Youra  balance is 50000 \n";
	}
	else
	{
		cout << "Your Account is Blocked > \n";
	}
	return 0;
}