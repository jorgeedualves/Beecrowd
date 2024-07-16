#include <iostream>

using namespace std;

int main (void){

    float num;
    int i = 0, j = 0;

    while(i < 6){
        cin >> num;
        if(num > 0)
            j++;
        i++;
    }
    cout << j << " valores positivos" << endl;
    return(0);
}