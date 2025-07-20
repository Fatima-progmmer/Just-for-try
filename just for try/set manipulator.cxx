#include<iostream>
#include<iomanip>;
using namespace std;
int main()
{
long pop1=2425785,pop2=47,pop3=9761;

cout << setw(8) << "Location" << setw(12)<< "population" << endl<<setw(8) << "porycity" << setw(12) <<pop1 << endl 
 << setw (8) << "Hightown" << setw (12) << pop2<< endl << setw (8) << "Lowille" << setw(12) <<pop3 << endl;
return 0;
}