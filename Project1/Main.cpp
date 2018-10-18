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

	int user_Input;
	cin >> user_Input;
	cout << endl;
	
	if (user_Input == 1)
	{
		cout << "Menu Option 1"<<endl<<endl;
		main();
	}
	else if (user_Input == 2)
	{
		cout << "Menu Option 2" << endl << endl;
		main();
	}
	else if (user_Input == 3)
	{
		cout << "Menu Option 3" << endl << endl;
		main();
	}
	else if (user_Input == 4)
	{
		cout << "Menu Option 4" << endl << endl;
		main();
	}
	else if (user_Input == 5)
	{
		cout << "Thank you!"<< endl;
		system("pause");
		return 0;
	}
	else
	{
		cout << "Invalid Option.  Please enter a valid option." << endl<<endl;
		main();
	}

	return 0;

}
