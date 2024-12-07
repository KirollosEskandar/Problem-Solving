// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum Days {
	Sunday = 1, Monday = 2, Tuesday = 3,
	Wednesday = 4, Thursday = 5, Friday = 6,
	Saturday = 7
};

Days Read()
{
	int T;
	cout << "Please Enter Number of Day : ";
	cin >> T;
	return Days(T);
}

void Print(Days d)
{

	switch (d)
	{
	case Days::Sunday:
		cout << "Sunday" << endl;
		break;
	case Days::Monday:
		cout << "Monday" << endl;
		break;
	case Days::Tuesday:
		cout << "Tuesday" << endl;
		break;
	case Days::Wednesday:
		cout << "Wednesday" << endl;
		break;
	case Days::Thursday:
		cout << "Thursday" << endl;
		break;
	case Days::Friday:
		cout << "Friday" << endl;
		break;
	case Days::Saturday:
		cout << "Saturday" << endl;
		break;
	}
}
int main()
{
	Print(Read());
	return 0;
}