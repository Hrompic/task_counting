#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector<string> sarr;
long long count;

void check(string&);
void dump();

int main()
{
	string input;
	string word;
	while(getline(cin, input))
	{
		stringstream ss(move(input));

		while(ss >>word)
		{
//			cout <<word <<endl;
			check(word);
		}
	}
//	dump();
//	cout <<"All words: " <<count <<endl;
	cout <<sarr.size() <<endl;
	return 0;
}
void check(string &s)
{
	count++;
	if(!sarr.size())
		sarr.push_back(s);
	for(vector<string>::size_type i=0; i<sarr.size(); i++)
	{
		if(sarr[i]==s)
			return;
	}
	sarr.push_back(s);
}
void dump()
{
	for(vector<string>::iterator i=sarr.begin(); i!=sarr.end(); i++)
		cout <<*i <<" ";
	cout <<endl;
}
