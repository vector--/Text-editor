/* 7/29/2013: The program now writes the user's text after the first space to file. It turns out cin doesn't work beyond the
first space in a string, but getline(cin, var) does. The problem with the program halting execution after printing
"Is that all, yes/no?" is fixed too. I just had to write fflush(stdin) after the line which writes the user's input to the file.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string a;
string b;
string c;
string d;

int main()
{
	ofstream file;
	cout << "What do you want to name your file?\n";
	getline(cin, a);
	file.open (a);
	cout << "Enter your text.\n";
	getline(cin, b);
	file << b << endl;
	fflush(stdin);
	cout << "Is that all, yes/no?\n";
	getline(cin, c);

	if (c == "Yes")
	{
		file.close();
		return 0;
	}

	else if (c == "No")
	{
		cout << "Enter the rest of your text.\n";
		getline(cin, d);
		file << d << endl;
		file.close();
		return 0;
	} 
		
	
}