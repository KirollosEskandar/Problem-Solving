#include <iostream>;
using namespace std;
int ReadNum()
{
	int n;
	cout << "Please Enter Number To : ";
	cin >> n;
	return n;
}

void PrintTo(int n)
{
	for (int i = n; i >= 1; i--)
	{
		cout << i << " ";
	}
}
int main()
{
	PrintTo(ReadNum());
	return 0;
}