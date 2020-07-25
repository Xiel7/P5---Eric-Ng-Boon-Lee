#include <iostream>
#include <string>
using namespace std;

bool passwordValidator(const char* const str);

int main()
{
	char password[20];

	cout << "Enter your password : ";
	cin >> password;


	if (passwordValidator(password))
		cout << "Password is valid\n";
	else
		cout << "Password is not valid\n";

	return 0;
}


bool passwordValidator(const char* const str)
{
	/*A password must have at least 7 characters.
	A password consists of only letters and digits.
	A password must contain at least one letter and at least one digit.*/

	bool length = false;
	bool oneDigit = false;
	bool oneLetter = false;
	bool isAlNum = true;

	//check length
	if (strlen(str) >= 7)
	{
		length = true;
	}
	else
		cout << "A password must have at least 7 characters.\n";

	for (int i = 0; i < strlen(str); i++)
	{
		if (!isalnum(str[i]))
		{
			isAlNum = false;
		}

		if (isdigit(str[i]))
		{
			oneDigit = true;
		}

		if (isalpha(str[i]))
		{
			oneLetter = true;
		}
	}

	if (!isAlNum)
		cout << "A password consists of only letters and digits.\n";
	if (!oneDigit || !oneLetter)
		cout << "A password must contain at least one letter and at least one digit.\n";

	
	if (length && oneDigit && oneLetter && isAlNum)
	{
		return true;

	}
	else
		return false;
}