#include <iostream>;
#include <string>;
//#include <math>;
using namespace std;
struct S_Driver
{
	int age;
	bool driver_licence;
};
S_Driver ReadAgeH()
{
	S_Driver d;
	cout << "Please Enter Your Age : ";
	cin >> d.age;
	cout << "You Have driver licence ? if Yes enter 1 ... No enter 0: "
		<< endl;
	cin >> d.driver_licence;
	return d;
}
bool check(S_Driver d)
{
	if (d.age >= 21 && d.driver_licence == 1)
		return true;
	else
		return false;
}

void Print(bool b)
{
	if (b == true)
		cout << "OK You can Use Car ." << endl;
	else
		cout << "Sorry can't Use Car " << endl;
}
int main()
{
	Print(check(ReadAgeH()));
	return 0;
} 