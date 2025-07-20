#include <iostream>
using namespace std;
int main()
{
	int choice , limit ;
	while (1)
	{
		int sum;
		cout << "Enter Choice: ";
		cin >> choice;
		cout << "Enter Limit: ";
		cin >> limit;
		for (int i = 1; i <= limit; i++)
		
		{
		  sum += choice * i;
	 	cout << choice << " * " << i << " = " <<            choice * i << endl;
		}
		
		cout << "Total Sum is: " << sum <<                endl;
	}
	return 0;
}