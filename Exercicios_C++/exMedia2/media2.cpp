#include <iostream>
#include<iomanip>
using namespace std;

int     main(void)
{

double  a, b, c, soma, media;
int     peso2, peso3, peso5, totalPeso;

cin >> a;
cin >> b;
cin >> c;
peso2 = 2;
peso3 = 3;
peso5 = 5;

soma = (a * peso2) + (b * peso3) + (c * peso5);
totalPeso = peso2 + peso3 + peso5;
media = soma / totalPeso;

cout<<fixed<<setprecision(1);
cout << "MEDIA = " << media << endl;

	return (0);
}
