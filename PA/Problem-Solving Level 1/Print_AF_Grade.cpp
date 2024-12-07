#include <iostream>;
using namespace std;


int ReadNum()
{
	int n;
	cout << "Please Enter Number  : ";
	cin >> n;
	return n;
}
void PrintG(int g)
{
	if (g >= 90 && g <= 100)
		cout << "A" << endl;
	else if (g >= 80 && g <= 89)
		cout << "B" << endl;
	else if (g >= 70 && g <= 79)
		cout << "C" << endl;
	else if (g >= 60 && g <= 69)
		cout << "D" << endl;
	else if (g >= 50 && g <= 59)
		cout << "E" << endl;
	else
		cout << "F" << endl;

}
int main()
{
	PrintG(ReadNum());
	return 0;
}