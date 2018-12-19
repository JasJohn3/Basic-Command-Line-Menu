#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main() {
	cout << "1. Menu Option 1." << endl;
	cout << "2. Menu Option 2." << endl;
	cout << "3. Menu Option 3." << endl;
	cout << "4. Menu Option 4." << endl;
	cout << "5. Quit." << endl<<endl;

	cout << "Please Enter your selection: " << flush;

	int user_input;
	cin >> user_input;
	cout << endl;
	switch (user_input)
	{
	case 1:
		cout << "Menu Option 1" << endl << endl;
		main();
	case 2:
		cout << "Menu Option 1" << endl << endl;
		main();
	case 3:
		cout << "Menu Option 1" << endl << endl;
		main();
	case 4:
		cout << "Menu Option 1" << endl << endl;
		main();
	default:
		cout << "Invalid Selection.  Returning to Main Menu." << endl;
		break;
	}

	return 0;

}
