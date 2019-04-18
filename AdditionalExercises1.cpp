#include <iostream>
using namespace std;

bool isConsecutiveFour(const int values[], int size);

int main()
{
	int numbers[80], total;
	
	cout << "Please enter amount of numbers: ";
	cin >> total;
	for(int i = 0; i < total; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> numbers[i];
	}
	if(isConsecutiveFour(numbers, total))
		cout << "\nThis list has consecutive fours.\n";
	else
		cout << "\nThis list has no consecutive fours.\n";
	
	return 0;
}

bool isConsecutiveFour(const int values[], int size)
{
	int sequence = 0;
	for(int i = 0; i < size; i++)
	{
		if((values[i] == values[i + 1]) && (sequence < 3))
			sequence++;
		else if((values[i] != values[i + 1]) && (sequence < 3))
			sequence = 0;
		if(sequence == 3)
			return true;
	}
	return false;
}
