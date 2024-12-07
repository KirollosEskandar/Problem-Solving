#include <iostream>;
using namespace std;


enum EnOddOrEven { Odd = 1, Even = 2};
int ReadNum()
{
	int n;
	cout << "Please Enter Number To : ";
	cin >> n;
	return n;
}
EnOddOrEven CheckOddOrEven(int n)
{
	if (n % 2)
		return EnOddOrEven::Odd;
	else
		return EnOddOrEven::Even;
}

int SumEven(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (CheckOddOrEven(i) == EnOddOrEven::Even)
			sum += i;
	}
	return sum;
}
int SumOdd(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (CheckOddOrEven(i) == EnOddOrEven::Odd)
			sum += i;
	}
	return sum;
}
void PrintSum(int s)
{
	cout << "Sum  == " << s << endl;
}
int main()
{
	PrintSum(SumEven(ReadNum()));
	return 0;
}