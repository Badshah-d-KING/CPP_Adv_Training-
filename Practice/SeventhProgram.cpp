#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector <string>);

void print(int num)
{
	cout << "Printing int: " << num << endl;
}
void print(double num)
{
	cout << "Printing double: " << num << endl;
}
void print(string sentence)
{
	cout << "Printing string: " << sentence << endl;
}
void print(string sentence1, string sentence2)
{
	cout << "Printing two string: " << sentence1 << " and " << sentence2 << endl;
}
void print(vector <string> v)
{
	cout << "Printing vector of strings:";
	for(auto s: v)
	{
		cout << s + " ";
	}
	cout << endl;
}
int main()
{
	string s {"C++ type string"};
	print(100);
	print(3.5);
	print("C++ type string");
	print("string1", "string2");
	print(s);

	vector <string> team_names {"Neel", "Himanshu", "Shivam", "Dinesh", "Sumit", "Kalyani"};
	print(team_names);
	return 0;
}