#include <iostream>
#include <string>

using namespace std;

int number_of(string s);

int main()
{
	string foo;

	cout << "Enter a string to eval: " << endl;

	cin >> foo;

	cout << "The number of A\'s or a\'s in the string is: " << number_of(foo) << endl;

	return 0;
}

int number_of(string s)
{
	int total = 0;

	for ( int i = 0; i < s.length(); i++ )
	{
		if ( s[i] == 'a' || s[i] == 'A' )
		{
			total++;
		}
	}

	return total;
}
