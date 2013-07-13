#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string a;
string b;
string c;

int main ()
{
	cout << "Enter your desired filename.\n";
	cin >> a;
	ofstream myfile;
	myfile.open (a);
	cout << "Enter your input.\n";
	cin >> (b);
	myfile << (b) << endl;
	myfile.close();
	return 0;
}