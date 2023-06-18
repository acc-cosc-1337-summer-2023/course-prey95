//write include statements
#include "repetition.h"
//write using statements

int main() 
{
	string word;
	char key;
	double content = 0.0;

	while( !( (key == 'Y') || (key == 'y') ) ){
		cout << "Hello, Please enter a DNA string: ";
		cin >> word;

		content = get_gc_content(word);
		cout << "The GC content of " << word << " is: " << content << "%" << "\n";
		cout << "If you would like to exit press 'y' otherwise press any other key: ";
		cin >> key;
	}

	return 0;
}
