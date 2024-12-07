 #include <iostream>;
using namespace std;

// Write a Program to guess a 3-Letter Password (All Capital)
string ReadPass()
{
	string s;
	do
	{
		cout << "Please Enter Password : ";
		cin >> s;
	} while (s.size() != 3);
	cout << "Password is " << s << endl;
	return s;
}
int GuessA_3Letter_Password(string pass)
{
	int count = 0;
	string p = "";
	for (int i = 'A'; i <= 'Z'; i++)
	{
		for (int j = 'A'; j <= 'Z'; j++)
		{
			for (int k = 'A'; k <= 'Z'; k++)
			{
				p = char(i);
				p += char(j);
				p += char(k);
				count++;
				if (p == pass)
					return count;

			}
		}
	}
	return -1;
}
int main()
{
	int G = GuessA_3Letter_Password(ReadPass());
	if (G == -1)
		cout << "Not Found ." << endl;
	else
		cout << "Fount after " << G
			<< " Trial(s).\n";
}