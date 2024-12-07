#include <iostream>;
using namespace std;


int ReadNum()
{
	int n;
	cout << "Please Enter Number To : ";
	cin >> n;
	return n;
}
void PowTo2(int n)
{
	int sum = 1;
	for (int i = 0; i < 2; i++)
	{
		sum *= n;
	}
	cout << "Pow of 2 : " << sum << endl;
}
void PowTo3(int n)
{
	int sum = 1;
	for (int i = 0; i < 3; i++)
	{
		sum *= n;
	}
	cout << "Pow of 3 : " << sum << endl;
}

void PowTo4(int n)
{
	int sum = 1;
	for (int i = 0; i < 4; i++)
	{
		sum *= n;
	}
	cout << "Pow of 4 : " << sum << endl;
}

int main()
{
	int n = ReadNum();
	PowTo2(n);
	PowTo3(n);
	PowTo4(n);
	return 0;
}