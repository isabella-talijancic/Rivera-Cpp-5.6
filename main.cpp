// Chpt 5 For Loop - Print out a Multiplication Table determined by user.
// Input: End-limit
// Output: Multiplication Table
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int size;
	int column = 1;
	int row = 1;
	cout <<"* * * * * * * * * MULTIPLICATION TABLE * * * * * * * * * *\n\n";
	cout << "Please enter the size of your multiplication table :";
	cin >> size;
	
	cout << "\n ";
	for (column = 1; column <= size; column++)
	{
		if (column < 10)
		{		cout << "   " << column; }
	}
	
	//Prints the line below the header row
	int lineLength = size * 5;
	cout << "\n  +" << string(lineLength, '-');
	//Write the Nested For loops to make the table
	row = 1;
	int countNum = 1;
	for (row = 1; row <= size; row++)
	{
		cout << "\n" << row << " | ";
		
		for (column = 1; column <= size; column++)
		{
			int results = row * column;
			
			if (results < 10)
			{		cout << results << "   "; }
			else if ((results >= 10) && (results <= 99))
			{		cout << results << "  "; }
			else
			{		cout << results << " "; }
		}
	}
	cout << "\n\nEnd of Program";
	return 0;
}