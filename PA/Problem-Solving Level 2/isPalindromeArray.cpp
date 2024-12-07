#include <iostream>;
#include <vector>;
#include <string>
using namespace std;


/*
	write a program to fill array with numbers,
	then check if it is palindrome array or not 
	Note : palindrome aray can be read the some from right to
	left and from left to right 
*/


void PrintArr(int arr[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

bool isPalindrome(int arr[100], int len)
{
	for (int i = 0; i <= len/2; i++)
	{
		if (arr[i] != arr[len - i - 1])
			return false;
	}
	return true;
}

void PrintIsPalindrome(int arr[100], int len)
{
	if (isPalindrome(arr, len))
		cout << "Yes array is Palindrome.\n";
	else
		cout << "No array is Not Palindrom. \n";
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[100]= {10,20,30,30,20,10}, length = 6;

	cout << "Array Elenments: " << endl;
	PrintArr(arr, length);
	PrintIsPalindrome(arr, length);

}