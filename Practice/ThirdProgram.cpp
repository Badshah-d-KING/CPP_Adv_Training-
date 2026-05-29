#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <char> vowels;			//Empty vector. Never do these for arrays
	vector <char> vowels_2[5]; 		//5 elements initialized to 0
	vector <char> vowels_3 {'a', 'e', 'i','o','u'};  

	cout << vowels_3[0] << endl;		//Array syntax
	cout << vowels_3[5] << endl;

	cout << vowels_3.at(0) << endl;		//Vector Syntax. So bounce check
	cout << vowels_3.at(5) << endl;
	
}