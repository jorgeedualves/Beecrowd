#include <iostream>

using namespace std;

int main(void){

    int a, b, c, maior;

    cin >> a;
    cin >> b;
    cin >> c;

    maior = (a + b + abs(a-b))/ 2;

    if(maior > c)
        cout << maior << " eh o maior" << endl;
    else
        cout << c << " eh o maior" << endl;

    return (0);
}
