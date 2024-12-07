 #include <iostream>;

using namespace std;

// Write a Program to Read how many Keys to Generate and print
// them on scren

enum enCharType {
	SmallLetter = 1, CapitalLetter = 2,
	SpecialCharcter = 3, Digit = 4
};

// This For Read How Many Key You Want 
int ReadHowMany()
{
	int n;
	cout << "Please Enter How Many Key You Want : ";
	cin >> n;
	return n;
}

/// <summary>
/// this funtion for get randam Num or Char Or >>>
/// </summary>
int Randam(int from = 65, int to = 90)
{
	int RandaChar = rand() % (to - from + 1) + from;
	return RandaChar;
}

// swith for get char
char GetRandamChar(enCharType Typ)
{
	switch (Typ)
	{
	case enCharType::SmallLetter:
		return Randam(97, 122);
		break;
	case enCharType::CapitalLetter:
		return Randam();
		break;
	case enCharType::SpecialCharcter:
		return Randam(33, 47);
		break;
	case enCharType::Digit:
		return Randam(1, 9);
		break;
	default:
		break;
	}
	return Randam();
}
string GenerateToWord(enCharType charType, int length)
{
	string word = "";
	for (int i = 0; i < length; i++)
	{
		word += GetRandamChar(charType);
	}
	return word;
}
string GenerateKey()
{
	string Key = GenerateToWord(enCharType::CapitalLetter, 4) + "-";
	Key += GenerateToWord(enCharType::CapitalLetter, 4) + "-";
	Key += GenerateToWord(enCharType::CapitalLetter, 4) + "-";
	Key += GenerateToWord(enCharType::CapitalLetter, 4);
	return Key;

}
void PintHowKey(int length)
{
	for (int i = 1; i <= length; i++)
	{
		cout << "Key[" << i << "] : " << GenerateKey() << endl;
	}
}
int main()
{
	srand((unsigned)time(NULL));
	PintHowKey(ReadHowMany());
	//GenerateKey();
}