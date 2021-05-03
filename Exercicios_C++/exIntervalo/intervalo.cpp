#include <iostream>
 
using namespace std;
 
int     main(void)
{
 
    double      n;

    cin >> n;
    
    if(n >= 0 && n <= 25.00)
    {
        cout << "Intervalo [0,25]" << endl;
    }
    else if (n >= 25.01 && n <= 50.00)
    {
        cout << "Intervalo (25,50]" << endl;
    }
    else if (n >= 50.01 && n <= 75.00)
    {
        cout << "Intervalo [50,75]" << endl;
    }
    else if (n >= 75.01 && n <= 100.00)
    {
        cout << "Intervalo (75,100]" << endl;
    }
    else
    {
        cout << "Fora de intervalo" << endl;
    }
    return (0);
}