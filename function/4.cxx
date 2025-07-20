#include<iostream>
using namespace std;

int RaiseTopower(int base,int exponent)
{
int result=1;
for(int x; x<4;x++){
	result =result *base;
}
return result;
}
int main()
{
	int  ThreeExpfour=RaiseTopower(3,4);
	cout <<"3^4 is  " << ThreeExpfour;
	int FiveExpsix = RaiseTopower(5,6);
	cout <<"\n5^6 is " << FiveExpsix;
	return 0;

}