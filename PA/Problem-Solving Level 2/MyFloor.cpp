#include <iostream>;
#include <vector>;
#include <string>
using namespace std;


/*
	write a program to print MyFloor of numbers ,
	don't use built in MyFloor funtion
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
int MyFloor(float num)
{
	if (abs(GetFraction(num)) >= 0.1)
	{
		if (num > 0)
			return int(num);
		else
			return int(num - 1);
	}
	else
		return num;
}


int main()
{
	srand((unsigned)time(NULL));
	float x = read();
	cout << "My floor is : " << MyFloor(x) << endl;
	cout << "C++ Floor is : " << floor(x) << endl;

}