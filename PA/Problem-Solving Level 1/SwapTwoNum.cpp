#include <iostream>;
using namespace std;

void ReadNum(int& n1, int& n2)
{
	cout << "Please Enter first Number : ";
	cin >> n1;
	cout << "Please Enter Secound Number : ";
	cin >> n2;
}
void SwapNum(int& n1, int& n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

void PrintNum(int n1, int n2)
{
	cout << "*******************" << endl;
	cout << "Number 1 == " << n1 << endl;
	cout << "Number 2 == " << n2 << endl;
	cout << "*******************" << endl;
}

int main()
{
	int n1, n2;
	ReadNum(n1, n2);
	PrintNum(n1, n2);
	SwapNum(n1, n2);
	PrintNum(n1, n2);

	return 0;
}