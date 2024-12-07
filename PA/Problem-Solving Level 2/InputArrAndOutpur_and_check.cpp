#include <iostream>;
#include <vector>;
#include <string>
using namespace std;

int read(string Mesg)
{
	int n;
	cout << Mesg;
	cin >> n;
	return n;
}


void ReadArr(vector<int> &arr)
{
	int n = read("Please Enter How Many Element : ") , t;
	for (int i = 1; i <= n; i++)
	{
		t = read("Element[" + to_string(i) + "]: ");
		arr.push_back(t);
	}
}

void PrintAndChekNum(vector<int> arr)
{
	int sum = 0,t = read("\nEnter the Number you want to check : ");
	cout << "\nOriginal array : ";
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
		if (arr[i] == t)
			sum++;
	}
	cout << endl;
	cout << t << " is repeated " << sum << " time(s)" << endl;
}
int main()
{
	vector <int> arr;
	ReadArr(arr);
	PrintAndChekNum(arr);
}