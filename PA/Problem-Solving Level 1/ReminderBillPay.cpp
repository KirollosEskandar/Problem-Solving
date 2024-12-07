#include <iostream>;
using namespace std;

int Read(string Mesg)
{
	int r;
	cout << Mesg;
	cin >> r;
	return r;
}

int Reminder(int tb, int tp)
{
	return tb - tp;
}
int main()
{
	int totalBill, totalPay;
	totalBill = Read("Peasea Enter Total BILL: ");
	totalPay = Read("Peasea Enter Total Pay : ");
	cout << "Reminder is " << Reminder(totalBill, totalPay);
	return 0;
}