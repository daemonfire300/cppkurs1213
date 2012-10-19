#include <iostream>
using namespace std;

int isLeapYear(void)
{
    int jahr;
	cout << "Bitte geben sie eine Jahreszahl ein, und wir überprüfen ob es ein Schaltjahr ist" << endl;
	cin >> jahr;
	if((jahr % 4  == 0) || ((jahr % 400 == 0) && (jahr % 100 > 0)))
	{
	    cout << "Schaltjahr" << endl;
	}
	else
	{
	    cout << "Kein Schaltjahr" << endl;
	}
	return 1;
}

int main()
{
    while(true)
    {
        isLeapYear();
    }
	return 0;
}
