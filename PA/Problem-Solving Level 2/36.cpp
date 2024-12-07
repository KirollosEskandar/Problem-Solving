 #include <iostream>;

using namespace std;

/*
	Write a program to dynamicaly read numbers ans save
	them in an array Max size of array is 100
	allocate simi-dynmic array length

*/
int ReadNum(string Msg)
{
	int n;
	do
	{
		cout << Msg;
		cin >> n;
	} while (n < 0);
	return n;
}


int AddToArray(int arr[100])
{
	int len = 1, Ye;
	for (int i = 0; i < len; i++)
	{
		arr[i] = ReadNum("Please Enter a number : ");
		Ye = ReadNum("Do You Want to add more numbers ? [0]:No,[1]:Yes?");
		if (Ye)
		{
			len++;
		}
	}
	return len;
}

void Print_Array(int arr[100], int len)
{
	cout << "Array Lenght : " << len << endl;
	cout << "Array elements :  ";
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}




int main()
{
	srand((unsigned)time(NULL));
	int len, arr[100];
	len = AddToArray(arr);
	Print_Array(arr, len);
}