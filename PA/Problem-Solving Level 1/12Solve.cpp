#include <iostream>;
#include <string>;
//#include <math>;
using namespace std;


// the first Problem in courses 4
void PrintName(string name)
{
	cout << "Hello : " << name << "\n";
}


// The 2 problem read and print name

string readName()
{
	string name;
	cout << "Please Enter Your Name : ";
	getline(cin , name);
	return name;
}
int main()
{
	//readName();
	PrintName(readName());

	return 0;
} 