#include<iostream>
using namespace std;
int main()
{
  int num;
  cout <<"Enter a number=";
  cin >> num;
  if(num<0)
  cout <<"negative";
  else if(num>0)	
  cout << "positive";
  else
  cout <<"Zero";
  return 0;
}