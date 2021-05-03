#include <iostream>
#include <iomanip> 
using namespace std;
 
int     main(void) {
 
   double   pi, vol, raio;
   
   pi = 3.14159;
   cin >> raio;
   
   vol = (4.0/3) * pi * (raio * raio * raio);
   
   cout << fixed << setprecision(3);
   cout << "VOLUME = " << vol << endl;
 
    return (0);
}