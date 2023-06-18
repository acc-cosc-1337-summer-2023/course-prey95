//write include statements
#include "decisions.h"

int main() 
{
	int grade;
	char Lgrade;

	cout << "Hello, please enter your grade: ";
	cin >> grade;

	Lgrade = get_letter_grade_using_switch(grade);

	cout << "The letter grade for " << grade << " is: " << Lgrade << "\n";

	return 0;
}