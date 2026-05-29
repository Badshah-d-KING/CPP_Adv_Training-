#include<iostream>
#include<vector>

using namespace std;

int main (){

	vector<int> vector1;
	vector1.push_back(10);
	vector1.push_back(20);


	cout << "First vector element is : " << vector1.at(0) << "\n";
	cout << "Second vector element is : " << vector1.at(1) << "\n";
	cout << "The size of the vector is : " << vector1.size() << "\n";

}
