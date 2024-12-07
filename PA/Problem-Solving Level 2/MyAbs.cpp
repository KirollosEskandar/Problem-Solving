#include <iostream>;
#include <vector>;
#include <string>
using namespace std;


/*
	write a program to print Abs of numbers ,
	don't use built in Abs funtion
*/

int read()
{
	float n;

	cout << "Enter Your Number : ";
	cin >> n;
	return n;
}

int MyAbs(int num)
{
	if (num < 0)
		return num * -1;
	else
		return num;
}


int main()
{
	srand((unsigned)time(NULL));
	int x = read();
	cout << "My Abs is : " << MyAbs(x) << endl;
	cout << "C++ Abs is : " << abs(x) << endl;

}