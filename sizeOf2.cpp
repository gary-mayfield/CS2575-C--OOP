#include <iostream>
using namespace std;

template <typename T>
int getSize()
{
	return sizeof(T);
}

int main()
{
	cout << "Please select a variable from the options below to see the size in bytes\n";
	cout << "(i)nteger \t (c)har \t (d)ouble \t (l)ong \t (f)loat \t (a)ll \t\t  e(x)it\n\n";
	char selection;
	do
	{
		cout << "\nSelection: " << endl;
		cin >> selection;

		switch (selection)
		{
		case 'i':
		case'I':
			cout << "\nInteger size: " << getSize<int>() << endl;
			break;
		case 'c':
		case 'C':
			cout << "\nChar size: " << getSize<char>() << endl;
			break;
		case 'd':
		case 'D':
			cout << "\nDouble size: " << getSize<double>() << endl;
			break;
		case 'f':
		case 'F':
			cout << "\nFloat size: " << getSize<float>() << endl;
			break;
		case 'l':
		case 'L':
			cout << "\nLong size: " << getSize<long>() << endl;
			break;
		case 'x':
		case 'X':
			cout << "\nProgram exiting." << endl;
			break;
		case 'a':
		case 'A':
			cout << "\nInteger size: " << getSize<int>() << endl;
			cout << "Char size: " << getSize<char>() << endl;
			cout << "Double size: " << getSize<double>() << endl;
			cout << "Float size: " << getSize<float>() << endl;
			cout << "Long size: " << getSize<long>() << endl;
			break;
		default:
			cout << "Incorrect input" << endl;
			break;
		}

	} while (!(selection == 'x' || selection == 'X'));
}