#include <iostream>;
#include <vector>;
#include <string>
using namespace std;


/*
	write a program to print rount of numbers ,
	don't use built in rount funtion
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
int MyRound(float num)
{
	float fration = GetFraction(num);

	if (abs(fration) >= .5)
	{
		if (num > 0)
			return ++num;
		else
			return --num;
	}
	else
		return num;
}

//int MyRound(float x)
//{
//	if (x < 0)
//	{
//		if (int(x - 0.5) > int(x))
//			return int(x - 0.5);
//	}
//	else if (int(x + 0.5) > int(x))
//		return int(x + 0.5);
//	else
//		return int(x);
//}
int main()
{
	srand((unsigned)time(NULL));
	float x = read();
	cout << "My Round is : " << MyRound(x) << endl;
	cout << "C++ Round is : " << round(x) << endl;

}