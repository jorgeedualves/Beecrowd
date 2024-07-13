#include <iostream>
#include <string>

using namespace std;

int main (void){

    string tipo, classe, dieta;

        if (tipo == "vertebrado"){
            if(classe == "ave"){
                if(dieta == "carnivoro")
                    cout << "aguia" << endl;
                else if (dieta == "onivoro")
                    cout << "pomba" << endl;
            }
            else if(classe == "mamifero"){
                if(dieta == "onivoro")
                    cout << "homem" << endl;
                else if (dieta == "herbivoro")
                    cout << "vaca" << endl;
            }
        }
        else if (tipo == "invertebrado"){
            if (classe == "inseto"){
                if(dieta == "hemafago")
                    cout << "pulga" << endl;
                else if (dieta == "herbivoro")
                    cout << "largata" << endl;
            }
            else if (classe == "anelideo"){
                if(dieta == "hemafago")
                    cout << "sanguessuga" << endl;
                else if(dieta == "onivoro")
                    cout << "minhoca" << endl;
            }
        } 

    return (0);
}