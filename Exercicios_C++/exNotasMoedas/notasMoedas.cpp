#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (void){

    double value = 0;

    cin >> value;

int hundred = value / 100.00;
    value = fmod(value, 100.0);

int fifty = value / 50.0;
    value = fmod(value ,50.0);

int twenty = value / 20.0;
    value = fmod(value, 20.0);

int ten = value / 10.0;
    value = fmod(value, 10.0);

int five = value / 5.0;
    value = fmod(value, 5.0);

int two = value / 2.0;
    value = fmod(value, 2.0);

int one = value / 1.0;
    value = fmod(value, 1.0);

int fiftyCents = value / 0.50;
    value = fmod(value, 0.50);

int twentyFiveCents = value / 0.25;
    value = fmod(value, 0.25);

int tenCents = value / 0.10;
    value = fmod(value, 0.10);

int fiveCents = value / 0.05;
    value = fmod(value, 0.05);
 
int oneCent = round(value / 0.01);

    cout << "NOTAS:" << endl;
    cout << hundred << " nota(s) de R$ 100.00" << endl;
    cout << fifty << " nota(s) de R$ 50.00" << endl;
    cout << twenty << " nota(s) de R$ 20.00" << endl;
    cout << ten << " nota(s) de R$ 10.00" << endl;
    cout << five << " nota(s) de R$ 5.00" << endl;
    cout << two << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << one << " moeda(s) de R$ 1.00" << endl;
    cout << fiftyCents << " moeda(s) de R$ 0.50" << endl;
    cout << twentyFiveCents << " moeda(s) de R$ 0.25" << endl;
    cout << tenCents << " moeda(s) de R$ 0.10" << endl;
    cout << fiveCents << " moeda(s) de R$ 0.05" << endl;
    cout << oneCent << " moeda(s) de R$ 0.01" << endl;

    return(0);
}