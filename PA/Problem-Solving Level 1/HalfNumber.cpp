#include <iostream>;
#include <string>;
//#include <math>;
using namespace std;
int readNumber()
{
	int num;
	cout << "Please Enter Number : ";
	cin >> num;
	return num;
}
float calcNum(int n)
{
	return (float) n / 2;
}

void PrintHalfNum(float n)
{
	cout << "Your Half Number is : " << n;
}
int main()
{
	PrintHalfNum(calcNum(readNumber()));
	return 0;
} 