#include <iostream>
#include <iomanip>
using namespace std;
 
int     main(void)
{
int linhaOperacao;
char operacao;
float matriz [12] [12];
float resultado;

resultado = 0.0;
cin >> linhaOperacao;
cin >> operacao;
 
for(int i=0; i<12; i++)
{
	for(int j=0; j<12;j++)
    {
		cin >> matriz[i][j];
 
	}
 
}
 
for(int i=0; i <12; i++)
{
	if (operacao == 'S')
    {
		resultado += matriz[linhaOperacao][i];
	} else if (operacao == 'M')
        {
		resultado += matriz[linhaOperacao][i] / 12;
	    }
}
 
cout << fixed << setprecision(1) << resultado << endl;
return (0);
}