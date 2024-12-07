#include <iostream>;
using namespace std;

// Write a Program to read a digit and a number
// , then print digit Frequency in that number

int ReadNumbers(string mesg)
{
	int n;
	do
	{
		cout << mesg;
		cin >> n;
	} while (n < 1);
	return n;
}

int FrequencyTimes(int n, int d)
{
	int sum = 0;
	while (n >= 1)
	{
		if ((n % 10) == d)
			sum++;
		n = n / 10;
	}
	return sum;
}

int main()
{
	int Numbers = ReadNumbers("Please Enter Numbers : "), Digit;
	Digit = ReadNumbers("Please Enter a Digit for check Frequency : ");
	cout << "Digit " << Digit << " Frequency is " << FrequencyTimes(Numbers, Digit)
		<< " Time(s)" << endl;
}