//write include statements
#include "data_types.h"

//write namespace using statement for cout
using std::cout;
using std::cin;

int main()
{
	int num;
	int num1 = 4;
	int result;

	cout << "Please enter a number: ";
	cin >> num;
	result = multiply_numbers(num);

	cout << result << " \n";

	result = multiply_numbers(num1);

	cout << result << "\n";

	return 0;
}
