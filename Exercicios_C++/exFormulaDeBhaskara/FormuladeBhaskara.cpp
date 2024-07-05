#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (void){


    double a, b, c, delta;

    cin >> a >> b >> c;

    if (a == 0 || (b * b - 4 * a* c) < 0)
        cout << "Impossivel calcular" << endl;
    else{
        delta = b * b - 4 * a* c;

        double r1 = (-b + sqrt(delta)) / (2 *a);
        double r2 = (-b - sqrt(delta)) / (2 *a);

        cout << fixed << setprecision(5);
        cout << "R1 = " << r1 << endl;
        cout << "R2 = " << r2 << endl; 
    }

    return (0);
}