#include <iostream>
#include <string>
#include <map>

using namespace std;

int main (void){

    int number;

    cin >> number;

    map<int, string> ddd = {
        {11, "Sao Paulo"},
        {19, "Campinas"},
        {21, "Rio de Janeiro"},
        {27, "Vitoria"},
        {31, "Belo Horizonte"},
        {32, "Juiz de Fora"},
        {61, "Brasilia"},
        {71, "Salvador"}
    };

    if(ddd.find(number) != ddd.end())
        cout << ddd[number] << endl;
    else
        cout << "DDD nao cadastrado" << endl;
    return (0);
}