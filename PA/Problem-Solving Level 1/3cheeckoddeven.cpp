#include <iostream>;
#include <string>;
//#include <math>;
using namespace std;


// this Program for check if Even or odd
enum NumberType {odd = 1, even = 2};

int readNumber()
{
	int n;
	do
	{
		cout << "Please Enter Postive Number : ";
		cin >> n;
	} while (n <  0);
	return n;
}
NumberType checkNum(int i)
{
	int res = i % 2;
	if (res == 0)
		return NumberType::even;
	else
		return NumberType::odd;
}
void PrintTypeNumber(NumberType n)
{
	if (n == NumberType::even)
		cout << "Your Number is Even . " << endl;
	else
		cout << "Your Number is Odd . " << endl;

}
int main()
{
	PrintTypeNumber(checkNum(readNumber()));
	return 0;
} 