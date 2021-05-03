#include <iostream>
using namespace std;

int     main(void)
{
	int n, d, m, a; 
	
	cin >> n;
	
	d = (n % 365) % 30;
	m = (n % 365) / 30;
	a = (n / 365);
	
	cout << a << " ano(s)" << endl;
	cout << m << " mes(es)" << endl;
	cout << d << " dia(s)" << endl;
	
	return(0);
}