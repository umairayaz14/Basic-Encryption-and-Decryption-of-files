#include <iostream>
#include<fstream>
#include<string>
using namespace::std;

int main()
{
	fstream example, example1;
	example.open("ciphertext.txt",ios::in);
	example1.open("nplaintext.txt", ios::out);
	string s;
	string temp = "";
	string s2="";
	example >> s;
	int key;
	key = s[0] - 'D';
	example.close();
	example.open("ciphertext.txt", ios::in);
	while (!example.eof())
	{
		getline(example, s);
		for (int x = 0; x < s.length(); x++)
		{
			temp = s[x] -key;
			s2 = s2 + temp;

		}
		cout << s2 << endl;
		example1 << s2 << endl;
		s = "";
		temp = "";
		s2 = "";

	}
	example.close();
	example1.close();
	return 0;
}

