#include <iostream>;
using namespace std;

enum EnOpType {add = '+' , sub = '-' , mult = '/' };
int ReadNum(string Mesg)
{
	int n;
	cout << Mesg;
	cin >> n;
	return n;
}

EnOpType ReadType()
{
	char op = '+';
	cout << "Please Enter - + / : ";
	cin >> op;
	return (EnOpType)op;
}
int calc(int a, int b, EnOpType op)
{
	switch (op)
	{
	case EnOpType::add:
		return a + b;;
	case EnOpType::sub:
		return a - b;
	case EnOpType::mult:
		return a / b;
	default:
		return a + b;
	}
}
int main()
{
	int a = ReadNum("Please Enter First Number : \n");
	int b = ReadNum("Please Enter Secound Number : \n");
	cout << "Reslut : " << calc(a, b, ReadType()) << endl;
	return 0;
}