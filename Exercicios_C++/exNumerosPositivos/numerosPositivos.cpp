#include <iostream>

using namespace std;

int main() {
    float num;
    int contadorPositivos = 0;

    for (int i = 0; i < 6; ++i) {
        cin >> num;
        if (num > 0)
            ++contadorPositivos;
    }

    cout << contadorPositivos << " valores positivos" << endl;
    return 0;
}