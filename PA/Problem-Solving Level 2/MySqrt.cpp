#include <iostream>;
#include <vector>;
#include <string>
using namespace std;


/*
	write a program to print Sqrt of numbers ,
	don't use built in Sqrt funtion
*/

float read()
{
	float n;

	cout << "Enter Your Number : ";
	cin >> n;
	return n;
}

int MySqrt(int num)
{
	return pow(num, .5);
}


int main()
{
	srand((unsigned)time(NULL));
	float x = read();
	cout << "My Sqrt is : " << MySqrt(x) << endl;
	cout << "C++ Sqrt is : " << sqrt(x) << endl;

}