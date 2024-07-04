#include <iostream>

using namespace std;

int main (void){
    int value;

    cin >> value;

    int hours = value / 3600;
    value %= 3600;

    int minutes = value / 60;
    value %= 60;

    int second = value;

    cout << hours  << ":" << minutes << ":" << second << endl;
    return (0);
}