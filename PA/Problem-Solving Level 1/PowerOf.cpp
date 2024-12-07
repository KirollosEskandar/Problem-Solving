#include <iostream>;
using namespace std;


void ReadNum(int &n , int &p)
{
	cout << "Please Enter Number  : ";
	cin >> n;
	cout << "Please Enter Pow  : ";
	cin >> p;
}
void PowOf(int n, int p)
{
	int sum = 1;
	for (int i = 0; i < p; i++)
	{
		sum *= n;
	}
	cout << "Pow the num ==  : " << sum << endl;
}


int main()
{
	int n, p;
	ReadNum(n, p);
	PowOf(n, p);
	return 0;
}