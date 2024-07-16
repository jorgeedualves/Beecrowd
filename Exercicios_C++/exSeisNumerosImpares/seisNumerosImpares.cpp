#include <iostream>

using namespace std;

int main (void){

    int num;

     cin >> num;
    for(int i=0; i < 6; ++i){
        if(num % 2 == 0)
            num++;
        cout << num++ << endl;
    }
    return(0);
}