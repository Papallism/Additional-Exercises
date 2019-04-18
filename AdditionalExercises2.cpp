#include <iostream>
using namespace std;

bool Cat(char [50]);

int main()
{
	char str[50];
	cout << "Enter a string: ";
	cin >> str;
	if(Cat(str))
		cout << "\nThe string contains cat.\n";
	else
		cout << "\nThe string does not contain cat.\n";
	
	return 0;
}

bool Cat(char str[50])
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == 'c' && i + 1 != '\0')
			if(str[i + 1] == 'a')
				if(str[i + 2] == 't')
					return true;
		i++;
	}
	return false;
}
