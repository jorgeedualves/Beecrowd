#include <iostream>
#include <iomanip>
 
using namespace std;
 
int     main(void)
{
   string   nome;
   double   salFixo;
   double   venda;
   double   comissao;
   double   total;
   
   cin >> nome;
   cin >> salFixo;
   cin >> venda;
   
   comissao = venda * 15 / 100;
   total = salFixo + comissao;
   
   cout << fixed << setprecision(2);
   cout << "TOTAL = R$ " << total << endl;
 
    return (0);
}