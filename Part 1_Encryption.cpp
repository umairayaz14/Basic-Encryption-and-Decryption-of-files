#include <iostream>
#include<fstream>
#include<string>
using namespace::std;

int main()
{
	cout << "Enter value of non-negative k: ";
	int k;
	cin >> k;
	int shift;
	shift = k % 66;
	cout << "Shift: " <<shift << endl;

	fstream example, example1;
	example.open("oplaintext.txt",ios::in);
	example1.open("ciphertext.txt", ios::out);
	string s;
	string temp="";
	string s2 = "";
	while (!example.eof())
	{
		getline(example, s);
		for (int x = 0; x < s.length(); x++)
		{
				temp = s[x] + k;
				s2 = s2 + temp;
			
		}
		cout << s2 << endl;
		example1 << s2<<endl;
		s = "";
		temp = "";
		s2 = "";

	}
	example.close();
	example1.close();
	return 0;
}

