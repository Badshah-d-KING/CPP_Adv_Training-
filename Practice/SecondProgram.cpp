#include <iostream>
using namespace std;

int main()
{
	char vowels[] {'a','e','i','o','u'};

	double hi_temp[] {90.1, 89.8, 77.5, 81.6};
	cout << "\nThe first high temperature is:" << hi_temp[0] << endl;
	cin >> vowels[5];  //!!!Out of bounds

	hi_temp[0] = 100.7;

	cout << "The first high temperature is now :" << hi_temp[0] << endl;

	int test_score[5] {100};

	cout << "\ntest Score 0 - " << test_score[0] << endl;
	cout << "\ntest Score 1 - " << test_score[1] << endl;
	cout << "\ntest Score 2 - " << test_score[2] << endl;
	cout << "\ntest Score 3 - " << test_score[3] << endl;
	cout << "\ntest Score 4 - " << test_score[4] << endl;

	int Exam_score[5] {100,200,300,400,500};
	cout << "\nExam Score 0 - " << Exam_score[0] << endl;
	cout << "\nExam Score 1 - " << Exam_score[1] << endl;
	cout << "\nExam Score 2 - " << Exam_score[2] << endl;
	cout << "\nExam Score 3 - " << Exam_score[3] << endl;
	cout << "\nExam Score 4 - " << Exam_score[4] << endl;
	test_score[5]= {100};

return 0;
}