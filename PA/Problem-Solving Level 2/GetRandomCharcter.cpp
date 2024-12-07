 #include <iostream>;

using namespace std;

// Write a Program to print  random
// Small Letter , Captail Letter , Special Letter , 
// and Digit in Order


enum EnCharType { smailLeter = 1, CaptailLetter = 2, SpecailCharcter = 3, Digit = 4 };
int RandamNumber(int from = 1, int to = 10)
{
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}

char GetRandomCharcter(EnCharType CharType)
{
	switch (CharType)
	{
	case EnCharType::smailLeter:
		return RandamNumber(97, 122);
		break;
	case EnCharType::CaptailLetter:
		return RandamNumber(65,90);
		break;
	case EnCharType::SpecailCharcter:
		return RandamNumber(33, 47);
		break;
	case EnCharType::Digit:
		return RandamNumber();
		break;
	default:
		break;
	}
	return '33';
}
int main()
{
	srand((unsigned)time(NULL));
	cout << int (GetRandomCharcter(EnCharType::Digit)) << endl;
	cout << GetRandomCharcter(EnCharType::CaptailLetter) << endl;
	cout << GetRandomCharcter(EnCharType::smailLeter) << endl;
	cout << GetRandomCharcter(EnCharType::SpecailCharcter) << endl;
}