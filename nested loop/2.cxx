#include<iostream>
using namespace std;
int main()
{
	int n,sum,value;
	cout << "Enter the numbers of integers you want to add=";
	cin >> n;
	for ( int c=1;c<n;c++)
	{
		cout << "Enter integer number=";
		cin >> value;
		sum =sum+value;
	}
	cout << "Sum of enterd integer number is="  << sum;
	return 0;
}