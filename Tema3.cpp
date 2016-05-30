// Tema 3 - Jogo de Corrida.
#include <iostream>
using namespace std;

// Identificador da função 'imprimir_espaços'.
void imprimir_espacos(int total);

int main(int argc, char* args[])
{
	// Quantidade Total de Espaços.
	int total_espacos = 10;

	/*
	*	Laço para as rodadas do jogo. 
	*	A cada rodada o carro do jogador anda 1 (um) espaço.
	*
	*	Rodada		Carro
	*	0			 s
	*   1			  s
	*   2			   s
	*   3			    s
	*	...			...
	*   9			          s
	*
	*/
	int rodada = 0;
	while (rodada < total_espacos)
	{
		// Mostra em tela o Letreiro do Jogo.
		cout << "Jogo de Corrida" << endl;
		// Mostra em tela o cartaz de fim de pista. 
		imprimir_espacos(total_espacos);
		cout << "|CHEGADA|" << endl;

		// Jogador 1: 
		//	a) Coloca uma quantidade de espaços dependendo da rodada.
		//  b) Mostra o carro.
		imprimir_espacos(rodada);
		cout << "  _  " << endl;
		imprimir_espacos(rodada);
		cout << "-o-o>" << endl;

		// Limpa a tela para mostrar a próxima rodada.
		system("cls");
		
		// Passa para a próxima rodada do laço.
		rodada++;
	}

	return 0;
}

/*
*	A função serve pra mostrar espaços em branco na tela.
*	
*	int total : Quantidade de espaços que serão mostrados.
*
*/
void imprimir_espacos(int total)
{
	// Imprime espaços de 'qntd_atual' até 'total'.
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++)
	{
		cout << " ";
	}
}








/*
//#include <string>
//#include <ctime>
int main(int argc, char* args[])
{
	bool sair = false;
	string jog1, jog2;
	int vida1 = 20, vida2 = 20;

	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;

	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;

	while (sair == false)
	{
		cout << " o                   o" << endl;
		cout << ".T./               \\.T." << endl;
		cout << " ^                   ^" << endl;
		cout << jog1 << "               " << jog2 << endl;
		cout << "Vida: " << vida1 << "          " << "Vida: " << vida2 << endl;

		system("pause");

		int dado6;

		// Usa o tempo atual como "semente" do gerador
		srand((int)time(0));
		// Gera um número aleatório entre 1 e 100
		dado6 = rand() % 6 + 1;
		// Causa dano igual o valor gerado no "dado"
		vida1 = vida1 - dado6;

		// Mesma coisa para o Jogador 2
		dado6 = rand() % 6 + 1;
		vida2 = vida2 - dado6;

		// Se sair não limpa a tela
		if (vida1 <= 0 || vida2 <= 0)
		{
			sair = true;
		}
		// Se continuar então limpa a tela
		else system("cls");
	}

	if (vida1 > 0) cout << jog1 << " Venceu!" << endl;
	else if (vida2 > 0) cout << jog2 << " Venceu!" << endl;
	else cout << "Os dois perderam!" << endl;

	return 0;
}
*/
	/*
#include <string>
	
	char inicial;
	string nome;
	string classe;

	cout << "Digite o nome do personagem:" << endl;
	getline(cin, nome);
	inicial = nome[0];
	cout << "Digite a classe do personagem:" << endl;
	cin >> classe;
	cout << "Personagem " << inicial << ". " << nome << endl;
	cout << "Classe: " << classe << endl;

	int ataque = 10;
	int defesa = 8, magica = 2, def_magica = 4;

	int vida = 65, vida_maxima = 110;

	cout << "Status " << endl;
	cout << "Ataque : " << ataque << " Defesa : " << defesa << endl;
	cout << "Magica : " << ataque << " Def. Magica : " << def_magica << endl;

	double porc_vida = (vida * 100) / vida_maxima;

	cout.precision(2);
	cout << "Vida : " << fixed << porc_vida << "%" << endl;

	bool morto = false;*/
