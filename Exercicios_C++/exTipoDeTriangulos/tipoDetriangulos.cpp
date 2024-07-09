#include <iostream>

using namespace std;

int main (void){

    float a, b, c;

    cin >> a >> b >> c;


    if(a < b)
        swap(a, b);
    if(a < c)
        swap(a, c);

    if (a > 0 && b > 0 && c > 0){
        if(a >= (b + c))
            cout << "NAO FORMA TRIANGULO" << endl;
        else{
            if((a*a) == (b*b + c*c))
                cout << "TRIANGULO RETANGULO" << endl;
            if((a*a) > (b*b + c*c))
                cout << "TRIANGULO OBTUSANGULO" << endl;
            if(a*a < (b*b + c*c))
                cout << "TRIANGULO ACUTANGULO" << endl;
            if(a == b && a == c && b == c)
                cout << "TRIANGULO EQUILATERO" << endl;
            if((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
                cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return(0);
}