#include <iostream>;
using namespace std;

// Write a Program to Print all words from AAA to ZZZ
void PrintWordsFromAAAToZZZ()
{
	cout << "This AAA To ZZZ" << endl;
	for (int i = 'A'; i <= 'Z'; i++)
	{
		for (int j = 'A'; j <= 'Z'; j++)
		{
			for (int k = 'A'; k <= 'Z'; k++)
			{
				cout << char(i) << char(j) << char(k) << endl;
			}
			cout << endl;
		}
		cout << endl;
	}
}
int main()
{
	PrintWordsFromAAAToZZZ();
}