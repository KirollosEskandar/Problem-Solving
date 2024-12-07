#include <iostream>;

using namespace std;
int ReadNum(string Msg)
{
	int n;
	do
	{
		cout << Msg;
		cin >> n;
	} while (n < 1);
	return n;
}

int RandomNumber(int from = 1, int to = 100)
{
	return rand() % (to - from + 1) + from;
}

void FillArrayWith_random(int arr[100], int len)
{
	for (int i = 0; i < len; i++)
	{
		arr[i] = RandomNumber();
	}
}
void Print_Array(int arr[100], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int SearchFor(int arr[100], int len, int Targ)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == Targ)
			return i;
	}
	return -1;
}

void PrintSearchFor(int arr[100], int len, int Targ)
{
	int found = SearchFor(arr, len, Targ);
	cout << "Number You are looking for is " << Targ << endl;
	if (found == -1)
	{
		cout << "The Number is Not Fount : :(" << endl;
	}
	else
	{
		cout << "The Number found at posititon : " << found << endl;
		cout << "The Number found its order : " << found + 1 << endl;
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int len = ReadNum("Please Enter Size of Array : "), arr[100];

	FillArrayWith_random(arr, len);
	cout << "Array 1 Elements : " << endl;
	Print_Array(arr, len);

	int NumSearch = ReadNum("Please Enter a number for search ? ");
	PrintSearchFor(arr, len, NumSearch);
}