#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Hello World!" << endl;
	string input;
	while(getline(cin, input))
	{
		cout <<input;
	}
	return 0;
}
