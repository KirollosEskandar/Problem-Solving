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

bool isFound(int arr[100], int len, int Targ)
{
	if (SearchFor(arr, len, Targ) == -1)
		return false;
	return true;
}


void PrintIsFound(int arr[100], int len, int Targ)
{
	cout << "Number You are looking for is " << Targ << endl;
	if (!isFound(arr,len,Targ))
	{
		cout << "The Number is Not Fount : :(" << endl;
	}
	else
	{
		cout << "Yes, The number is Fount :-) : " << endl;
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
	PrintIsFound(arr, len, NumSearch);
}