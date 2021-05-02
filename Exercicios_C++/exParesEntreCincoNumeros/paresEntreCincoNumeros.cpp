#include <iostream>

using namespace std;

int     main(void) 
{
	
int     a, b, c, d, e;
int     qtd;

qtd = 0;

cin >> a, b, c, d, e;

if(a % 2 == 0)
{
	qtd++;	
}
if(b % 2 == 0)
{
	qtd++;
}
if(c % 2 == 0)
{
	qtd++;	
}
if(d % 2 == 0)
{
	qtd++;	
}
if(e % 2 == 0)
{
	qtd++;	
}
cout << qtd << "valores pares" << endl;
	
return (0);
}