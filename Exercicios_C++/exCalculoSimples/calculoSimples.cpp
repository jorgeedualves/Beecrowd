#include <iostream>
#include <iomanip>

using namespace std;
 
int     main(void) 
{
 
 int        cod1, qtd1, cod2, qtd2;
 double     valor1, valor2, totalValor1, totalValor2, total;
 
 cin >> cod1 >> qtd1 >> valor1;
 cin >> cod2 >> qtd2 >> valor2;
 
 totalValor1 = qtd1 * valor1;
 totalValor2 = qtd2 * valor2;
 
 total = totalValor1 + totalValor2;
 
 cout << fixed << setprecision(2); 
 cout << "VALOR A PAGAR: R$ " << total << endl;
 
    return (0);
}