#include <iostream>;
using namespace std;

enum PassFail { Pass = 1, Fail = 2 };

int readMark()
{
	int PF;
	cout << "Please Enter Your Mark : ";
	cin >> PF;
	return PF;
}
PassFail CheckPassFail(int M)
{
	if (M >= 50)
		return PassFail::Pass;
	else
		return PassFail::Fail;
}

void PrintRes(int mark)
{
	if (CheckPassFail(mark) == PassFail::Pass)
		cout << "Your Pass ." << endl;
	else
		cout << "Your Fail ." << endl;
}
int main()
{
	PrintRes(readMark());
	return 0;
}