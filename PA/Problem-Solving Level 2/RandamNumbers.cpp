 #include <iostream>;

using namespace std;

// Write a Program to print 3 random numbers frm 1 to 10

int RandamNumber(int from = 1, int to = 10)
{
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}
int main()
{
	srand((unsigned)time(NULL));
	cout << RandamNumber(10,100) << endl;
	cout << RandamNumber(10,100) << endl;
}