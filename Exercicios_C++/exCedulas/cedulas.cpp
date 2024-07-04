#include <iostream>

using namespace std;

int main() {
    int value;
    cin >> value;
    cout << value << endl;

    int hundred = value / 100;
    value %= 100;
    
    int fifty = value / 50;
    value %= 50;
    
    int twenty = value / 20;
    value %= 20;

    int ten = value / 10;
    value %= 10;
    
    int five = value / 5;
    value %= 5;
    
    int two = value / 2;
    value %= 2;

    int one = value;

    cout << hundred << " nota(s) de R$ 100,00" << endl;
    cout << fifty << " nota(s) de R$ 50,00" << endl;
    cout << twenty << " nota(s) de R$ 20,00" << endl;
    cout << ten << " nota(s) de R$ 10,00" << endl;
    cout << five << " nota(s) de R$ 5,00" << endl;
    cout << two << " nota(s) de R$ 2,00" << endl;
    cout << one << " nota(s) de R$ 1,00" << endl;

    return 0;
}
