#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter a=";
	cin >> a;
	cout << "Enter b=";
	cin >> b;
	cout << "Enter c=";
	cin >> c;
	if(a<=b)
	{
		if(a<=c)
		cout << "A is smaller";
		else 
		cout <<"C is smaller";
	}
	else
	{
		if(b<=c)
		cout <<"B is smaller";
		else
		cout <<"C is smaller";
	}
	return 0;
}