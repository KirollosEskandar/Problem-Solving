#include <iostream>;
using namespace std;

int ReadUntil99()
{
	int sum = 0, num = 0;
	cout << "If You End Enter 99 <" << endl;
	do
	{
		cout << "Enter NUM : ";
		cin >> num;
		if(num != 99)
			sum += num;
	} while (num != 99);
	return sum;
}

void PrintRes(int sum)
{
	cout << "Sum Your Enter is : " << sum << endl;
}
int main()
{
	PrintRes(ReadUntil99());
	return 0;
}