#include <iostream>
#include <iomanip>
using namespace std;

int     main(void)
{
	
	int temp, vel;
	float litros = 12;
	
	cin >> temp;
	cin >> vel;
	cout << fixed << setprecision(3);
	cout << (temp * vel) / litros << endl;
	
	return(0);
}