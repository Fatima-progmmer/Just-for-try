#include <iostream>
using namespace std;
int main()
{
	int row,c,n,temp;
	n = 0;
	temp = n;
	for(row=100;row>=n;row--)
	{
		for(c=1;c<=temp;c++)
		cout << " ";
		temp--;
		for(c=1;c<=2*row-1;c++)
		cout <<"*";
		cout <<"\n";
	}
}