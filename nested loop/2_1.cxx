#include<iostream>
using namespace std;
int main()
{
	int student[10];
	for(int i=0; i<=10;i++)
	{
		cout << "\nEnter roll number=";
		cin >> student[i];
	}
			cout <<"\nALL ROLL NUMBER IS:\n";
			for(int i=0; i<=10;i++)
			{
		cout << student[i];
		cout <<"\n";
			}
	return 0;
}	