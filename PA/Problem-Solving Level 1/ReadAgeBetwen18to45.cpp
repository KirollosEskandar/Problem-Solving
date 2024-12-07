#include <iostream>;
using namespace std;

bool vilidit_age(int n, int from = 18, int to = 45)
{
	return (n >= 18 && n <= 45);
}


int read()
{
	int n;
	do
	{
		cout << "Please Enter Your Age Betwen 18 to 45 only : ";
		cin >> n;
	} while (!vilidit_age(n));
	return n;
}
int main()
{
	read();
	return 0;
}