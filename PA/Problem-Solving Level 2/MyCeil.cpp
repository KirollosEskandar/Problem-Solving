#include <iostream>;
#include <vector>;
#include <string>
using namespace std;


/*
	write a program to print Ceil of numbers ,
	don't use built in Ceil funtion
*/

float read()
{
	float n;

	cout << "Enter Your Number : ";
	cin >> n;
	return n;
}

float GetFraction(float n)
{
	return n - int(n);
}
int MyCeil(float num)
{
	if (abs(GetFraction(num)) >= 0.1)
	{
		if (num > 0)
			return int(num+1);
		else
			return int(num);
	}
	else
		return num;
}


int main()
{
	srand((unsigned)time(NULL));
	float x = read();
	cout << "My Ceil is : " << MyCeil(x) << endl;
	cout << "C++ Ceil is : " << ceil(x) << endl;

}