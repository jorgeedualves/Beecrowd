#include <iostream>
#include <iomanip>
 
using namespace std;
 
int     main(void) {
 
 double a, b, c, pi = 3.14159;
 double tri, cic, tra, quad, ret;
 
 cin >> a;
 cin >> b;
 cin >> c;
 
 tri = (a * c) / 2;
 cic = pi * (c * c);
 tra = ((a + b)* c) / 2;
 quad = b * b;
 ret = a * b ;
 cout << fixed << setprecision(3);
 cout << "TRIANGULO: " << tri << endl;
 cout << "CIRCULO: " << cic << endl;
 cout << "TRAPEZIO: " << tra << endl;
 cout << "QUADRADO: " << quad << endl;
 cout << "RETANGULO: " << ret << endl;
 return (0);
}