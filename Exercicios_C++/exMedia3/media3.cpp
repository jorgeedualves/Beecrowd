#include<iostream>
#include <iomanip>
using namespace std;

int main() {

float n1, n2, n3, n4, ex, soma, media;
float peso1, peso2, peso3, peso4, totalPeso;

cin >> n1;
cin >> n2;
cin >> n3;
cin >> n4;
peso2 = 2;
peso3 = 3;
peso4 = 4;
peso1 = 1;

soma = (n1 * peso2) + (n2 * peso3) + (n3 * peso4) + (n4 * peso1);
totalPeso = peso1 + peso2 + peso3 + peso4;
media = soma / totalPeso;

cout<<fixed<<setprecision(1);

if(media >= 7.0)
{
	cout << "Media: " << media << endl;
	cout << "Aluno aprovado." << endl;
}
else if(media < 5.0)
{
	cout << "Media: " << media << endl;
	cout << "Aluno reprovado." << endl;
}
else
{
	cout << "Media: " << media << endl;
	cout << "Aluno em exame." << endl;
	cin >> ex;
	cout << "Nota do exame: " << ex << endl;
	media = (media + ex)/2;
	if(media >= 5.0)
	{
		cout << "Aluno aprovado." << endl;
		cout << "Media final: " << media << endl;
	}
	else
	{
		cout << "Aluno reprovado." << endl;
		cout << "Media final: " << media << endl;
	}
}
	return 0;
}