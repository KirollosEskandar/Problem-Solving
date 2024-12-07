#include <iostream>;
using namespace std;


int readN()
{
	int n;
	cout << "Enter Number : ";
	cin >> n;
	return n;
}

bool isPrime(int a)
{
	for (int i = 2; i < a/2; i++)
	{
		if (a % i == 0)
			return false;
	}
	return true;
}
void PrintRes(bool b)
{
	if (b)
		cout << "Your Number is Prime : " << endl;
	else
		cout << "Your Number is Not Prime : " << endl;
}
int main()
{
	PrintRes(isPrime(readN()));
	return 0;
}