#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	cout << "Hello World!" << endl;
	string input;
	string word;
	while(getline(cin, input))
	{
		stringstream ss(input);

		while(ss >>word)
			cout <<word <<endl;
	}
	return 0;
}
