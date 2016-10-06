#include <iostream>
using namespace std;

void showSize(char input);


int main()
{
	cout << "Please select a variable from the options below to see the size in bytes\n";
	cout << "(i)nteger \t (c)har \t (d)ouble \t (l)ong \t (f)loat \t e(x)it\n\n";
	char selection;
	do
	{
		cout << "\nSelection: " << endl;
		cin >> selection;
		showSize(selection);
	} while (!(selection == 'x' || selection == 'X'));
	
	getchar();
	getchar();
	return 0;

}

void showSize(char input)
{
	switch (input)
	{
	case 'i': 
	case'I':
		cout << "Integer size: " << sizeof(int) << endl;
		break;
	case 'c': 
	case 'C' :
		cout << "Char size: " << sizeof(char) << endl;
		break;
	case 'd':
	case 'D':
		cout << "Double size: " << sizeof(double) << endl;
		break;
	case 'f':
	case 'F':
		cout << "Float size: " << sizeof(float) << endl;
	case 'l': 
	case 'L' :
		cout << "Long size: " << sizeof(long) << endl;
		break;
	case 'x':
	case 'X':
		cout << "Program exiting." << endl;
		break;
	default:
		cout << "Incorrect input" << endl;
		break;
	}
}