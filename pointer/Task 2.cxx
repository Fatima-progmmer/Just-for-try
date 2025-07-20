#include <iostream>
using namespace std;
int main()
{
	int a[5][5], row = 5, column = 5, i, j;
	cout << "\tEnter elements of matrix: " << endl;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= column; j++)
			cin >> a[i][j];
	}
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= column; j++)
		{
			if (a[i][j] >= 100)
			{
				cout << "\n\tValue " << a[i][j] << " is not accepted you should again enter the value= ";
				cin >> a[i][j];
			}
		}
	}
			cout << "\n\tNow updated matrix are " << endl;
		for ( i = 1; i <=row; i++)
		{
			for (j = 1;j <= column; j++)
			{
				cout << " " << a[i][j];
				if (j == column)
					cout << endl << endl;
			}
		}
					if(a[i][j]<=a[i++][j++])
					cout << "\n\tThe smallest value is " << a[i][j] << " That is in " << i << "row " << " and "<< j<< " column";
	return 0;
}