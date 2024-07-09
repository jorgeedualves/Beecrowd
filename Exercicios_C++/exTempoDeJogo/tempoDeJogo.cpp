#include <iostream>

using namespace std;

int main(void){

    int init, end;

    cin >> init >> end;

    if(init > end)
        cout << "O JOGO DUROU " << (24 - init) + end << " HORA(S)" << endl;
    else if(init < end)
        cout << "O JOGO DUROU " << end - init << " HORA(S)" << endl;
    else
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    return(0);
}