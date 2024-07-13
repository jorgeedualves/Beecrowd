#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string tipo, classe, dieta;

    cin >> tipo >> classe >> dieta;

    map<string, map<string, map<string, string>>> animais = {
        {"vertebrado", {
            {"ave", {
                {"carnivoro", "aguia"},
                {"onivoro", "pomba"}
            }},
            {"mamifero", {
                {"onivoro", "homem"},
                {"herbivoro", "vaca"}
            }}
        }},
        {"invertebrado", {
            {"inseto", {
                {"hematofago", "pulga"},
                {"herbivoro", "lagarta"}
            }},
            {"anelideo", {
                {"hematofago", "sanguessuga"},
                {"onivoro", "minhoca"}
            }}
        }}
    };
    cout << animais[tipo][classe][dieta] << endl;

    return 0;
}
