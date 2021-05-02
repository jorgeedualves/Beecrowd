#include <iostream>
 
using namespace std;
 
int     main(void) 
{
 
   int n[10], x;

    for (int i = 0; i < 10; i++)
    {
	cin >> x;
	n[i] = x;

	cout << "N[" << i << "] = " << x << endl;
	x*=2;
    }
 
    return (0);
}