#include <iostream>;
using namespace std;


void ReadTringleArea(int& a, int& h)
{
	cout << "Please Enter a TringleArea :";
	cin >> a;
	cout << "Please Enter h TringleArea : ";
	cin >> h;
}
float CalcTringleArea(int a, int h)
{
	return (a / 2) * h;
}


void PrintTringleArea(float t)
{
	cout << "The TringleArea == " << t << endl;
}
int main()
{
	int n1, n2;
	ReadTringleArea(n1, n2);
	PrintTringleArea(CalcTringleArea(n1,n2));

	return 0;
}