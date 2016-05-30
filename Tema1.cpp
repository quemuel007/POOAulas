// Tema 1 - Construindo Personagens.
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* args[])
{
	char inicial;
	string nome;
	string classe;

	// Lê o nome do personagem, pode ser composto (por causa do getline).
	cout << "Digite o nome do personagem:" << endl;
	getline(cin, nome);
	// Pega a inicial do nome.
	inicial = nome[0];

	// Lê o nome da classe, apenas uma palavra (pois não usamos getline).
	cout << "Digite a classe do personagem:" << endl;
	cin >> classe;

	// Mostra em tela o nome do personagem, sua inicial e classe.
	cout << "Personagem " << inicial << ". " << nome << endl;
	cout << "Classe: " << classe << endl;

	// "Status" do personagem.
	int ataque = 10;
	int defesa = 8, magica = 2, def_magica = 4;		// Podemos declarar mais de uma variável por linha!

	int vida = 65, vida_maxima = 110;

	// Mostra a tela de personagem.
	cout << "Status " << endl;
	cout << "Ataque : " << ataque << " Defesa : " << defesa << endl;
	cout << "Magica : " << ataque << " Def. Magica : " << def_magica << endl;

	// Calcula a Porcentagem (%) da vida do personagem.
	double porc_vida = (vida * 100) / vida_maxima;
	// Com o comando 'precision' dizemos quantas casas decimais serão exibidas no 'cout'.
	cout.precision(2);		// Só mostrará 2 (duas) casas decimais.
	cout << "Vida : " << fixed << porc_vida << "%" << endl;		// Precisamos adicionar o 'fixed' para fazer o 'precision' funcionar.

	return 0;
}