 #include <iostream>;
using namespace std;

// Write a Program to read a text and encrypt it , decrypt it.
string ReadText()
{
	string s;
	do
	{
		cout << "Please Enter Text : ";
		cin >> s;
	} while (s.size() < 3);
	return s;
}
string encrypt(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		s[i] += 2;
	}
	return s;
}
string decrypt(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		s[i] -= 2;
	}
	return s;
}
int main()
{
	// encryptAnddecryptText
	//const short encryptionKey = 2;
	string s = ReadText();
	cout << "Text Before Encryption : " << s << endl;
	cout << "Text After Encryption : " << encrypt(s) << endl;
	cout << "Text Before Encryption : " << decrypt(encrypt(s)) << endl;
}