#include <iostream>;
using namespace std;


int ReadNum()
{
	int n;
	cout << "Please Enter Number To : ";
	cin >> n;
	return n;
}
int FactNum(int n)
{
	int Sum = n;
	for (int i = n-1; i >= 2; i--)
	{
		Sum *= i;
	}
	return Sum;
}
void PrintSum(int s)
{
	cout << "Sum  == " << s << endl;
}
int main()
{
	PrintSum(FactNum(ReadNum()));
	return 0;
}