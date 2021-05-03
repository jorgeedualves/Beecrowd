#include <iostream>
#include <iomanip>
using namespace std;

void precoItem( float valor)
{
	
cout << fixed << setprecision(2);	
cout << "Total: R$ " << valor << endl;	
	
}

int     main(void)
{
	
int     codigo, qtd;

	cin >> codigo;
	cin >> qtd;
	
	if(codigo == 1)
    {
		precoItem(4.00 * qtd);	
	} 
    else if (codigo == 2)
    {
		precoItem(4.50 * qtd);	
	}
    else if (codigo == 3)
    {
		precoItem(5.00 * qtd);
	}
    else if (codigo == 4)
    {
		precoItem(2.00 * qtd);
	}
    else if (codigo == 5)
    {
		precoItem(1.50 * qtd);
	} 
	return (0);
}
