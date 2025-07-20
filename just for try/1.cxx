#include <iostream>
using namespace std;
int main()
{
	for (int i =1;i<=80;i++)
	{
		char Ch=(i%8) ? ' ' : i;
		cout << Ch;
	}
	return 0;
}