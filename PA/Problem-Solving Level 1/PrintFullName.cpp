#include <iostream>;
#include <string>;
//#include <math>;
using namespace std;


enum PassFail { Pass = 1; Fail = 2 };

int readMark()
{
	int PF
	cout << "Please Enter Your Mark : ";
	cin >> PF;
	return PF;
}
PassFail CheckPassFail(int M)
{
	if (M >= 50)
		PF = PassFail::Pass;
	else
		PF = PassFail::Fail;
	return PF;
}

int main()
{
	return 0;
} 