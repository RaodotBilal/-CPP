// C++ program to compare one variable
// with multiple variable
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	// Variable to be compared
	char character = 'a';

	// Compare the given variable
	// with vowel individually

	// Check for vowel
	if (character == 'a'
		|| character == 'e'
		|| character == 'i'
		|| character == 'o'
		|| character == 'u') {
		cout << "Vowel";
	}

	// Otherwise Consonant
	else {
		cout << "Consonant";
	}

	return 0;
}

