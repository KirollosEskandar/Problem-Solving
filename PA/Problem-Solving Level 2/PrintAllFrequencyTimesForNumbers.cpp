#include <iostream>;
using namespace std;

// Write a Program to read  a number
// , then print all digit Frequency in that number

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
void PrintFT(int n)
{
	for (int i = 0; i < 10; i++)
	{
		short Frq = FrequencyTimes(n, i);
		if (Frq)
			cout << "Digit " << i << " Frquencey is "
				<< Frq << " Time(.)\n";
	}
}
int main()
{
	int Numbers = ReadNumbers("Please Enter Numbers : ");
	PrintFT(Numbers);
}