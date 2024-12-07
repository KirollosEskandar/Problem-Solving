#include <iostream>;
using namespace std;
struct Stime
{
	int Days, Hours, Minute, Secound;
};

void Read(Stime & time)
{
	cout << "Please Enter Days : ";
	cin >> time.Days;
	cout << "Please Enter Hours : ";
	cin >> time.Hours;
	cout << "Please Enter Minute : ";
	cin >> time.Minute;
	cout << "Please Enter Secound : ";
	cin >> time.Secound;
}

double CalcSecound(Stime time)
{
	double Total = time.Secound;
	Total += (time.Minute * 60); 
	Total += (time.Hours * 60 * 60);
	Total += (time.Days * 24 * 60 * 60);
	return Total;
}
int main()
{
	Stime time;
	Read(time);
	cout << CalcSecound(time) << " = Secound ." << endl;
	return 0;
}