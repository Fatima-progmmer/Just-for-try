#include<iostream>
using namespace std;
float Questions (float a,float b)
{
	float result=1;
		result = a/b;
	return result;
}
int main()
{
	float A1=Questions (90,7);
	cout << "90/7= " << A1 <<endl;
	
	float BE=Questions (67,3);
	cout <<"67/3= " << BE  << endl;
	return 0;
}