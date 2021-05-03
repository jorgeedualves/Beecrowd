#include <iostream>
#include <iomanip>
using namespace std;

int     main(void)
{
	
int number, horas;
double valorHora, sal;

cin >> number;
cin >> horas;
cin >> valorHora;

sal = horas * valorHora;

cout << fixed << setprecision(2);
cout << "NUMBER = " <<  number << endl;
cout << "SALARY = U$ " << sal << endl;
	
	return (0);
}