#include <iostream>;
using namespace std;
int Read(string mes)
{
	int n;
	cout << mes;
	cin >> n;
	return n;
}
float DayS(int h)
{
	return float (h / 24);
}
float Weeks(int h)
{
	return float(h / 24) / 7;
}

int main()
{
	int Hours = Read("Please Enter Hours : ");
	cout << "Days = " << DayS(Hours) << endl;
	cout << "Weeks = " << Weeks(Hours) << endl;
	return 0;
}