#include <iostream>
using namespace std;

int main()
{
	int scores [] {10,20,30};

	for (auto score_value : scores)      // for x in range y
	{
		cout << score_value << endl;
	}

	cout << endl;

	for (auto c:"Welcome to C++ course")
	{
		if(c==' ')
		{
			cout << "\n";
		}
		else
		{
			cout << c;
		}
	}
	cout << endl;
	return 0;
}