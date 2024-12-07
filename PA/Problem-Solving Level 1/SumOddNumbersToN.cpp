#include <iostream>;
using namespace std;
int ReadNum()
{
	int n;
	cout << "Please Enter Number To : ";
	cin >> n;
	return n;
}

int SumOdd(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (i % 2)
			sum += i;
	}
	return sum;
}
void PrintSum(int s)
{
	cout << "Sum Odd == " << s << endl;
}
int main()
{
	PrintSum(SumOdd(ReadNum()));
	return 0;
}