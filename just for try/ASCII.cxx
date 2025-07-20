#include<iostream>
using namespace std;
int main()
{
	char ascii;
	cout << "\t_______ACII_______" << endl;
	for(int y=0;y<256;y++)
	{
		ascii=y;
		cout  << y << "---" << ascii <<endl;
	}
	return 0;
}