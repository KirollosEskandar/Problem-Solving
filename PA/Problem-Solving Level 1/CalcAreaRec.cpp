#include <iostream>;
using namespace std;


void ReadArea(int& High, int& Width)
{
	cout << "Please Enter High Rec :";
	cin >> High;
	cout << "Please Enter Width Rec : ";
	cin >> Width;
}
float CalcRecArea(int h, int w)
{
	return h * w;
}


void PrintRecArea(float t)
{
	cout << "The Area Rec == " << t << endl;
}
int main()
{
	int n1, n2;
	ReadArea(n1, n2);
	PrintRecArea(CalcRecArea(n1,n2));

	return 0;
}