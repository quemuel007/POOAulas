// Tema 4 - Jogo das Moedas
#include <iostream>
#include <string>
using namespace std;

/*
 * Retire 1, 3 ou 4 moedas. 
 * Quem tirar a última ganha!
 *
 * O primeiro a chegar em 3 (três) vitórias ganha o jogo.
 *
 */
int main()
{
	// O jogo é feito para 2 jogadores.
	string jog1, jog2;

	// Diz qual o jogador da vez: 1 ou 2.
	int jogador_da_vez = 1;
	// Começa sempre com o Jogador 1.

	// O vencedor de cada rodada ganha 1 ponto. Quem chegar a 3 pontos primeiro vence o jogo.
	int pont_jog1 = 0, pont_jog2 = 0;

	// Total de moedas por partida.
	int moedas = 10;
	// Quantidade de moedas que o jogador quer retirar.
	int qnt_moedas_tira;
	
	// Recebe o nome dos jogadores 1 e 2.
	cout << "Digite o nome do Jogador 1:" << endl;
	cin >> jog1;
	cout << "Digite o nome do Jogador 2:" << endl;
	cin >> jog2;

	// Limpa a tela e inicia o jogo.
	system("cls");
	bool sair = false;

	// Enquanto sair for falso.
	while (!sair)
	{
		// MOSTRAR O PLACAR EM TELA COMO NA IMAGEM.
		cout << jog1 << " " << pont_jog1 << " x " << pont_jog2 << " " << jog2 << endl << endl;
		// MOSTRAR AS MOEDAS EM TELA COMO NA IMAGEM.
		for (int por_moeda = 1; por_moeda <= moedas; por_moeda++)
		{
			cout << "@";
		}
		cout << endl << endl;

		// Diz qual o jogador que está jogando.
		cout << "Vez do Jogador " << jogador_da_vez << endl;

		// RECEBER QUANTAS MOEDAS DEVE TIRAR.
		cout << "Digite 1, 3 ou 4 para tirar moedas." << endl;
		cin >> qnt_moedas_tira;

		// Verifica se a quantidade de moedas retiradas é valida.
		if (
			qnt_moedas_tira == 1 ||
			(qnt_moedas_tira == 3 && moedas >= 3) ||
			(qnt_moedas_tira == 4 && moedas >= 4)
			)
		{
			// RETIRA AS MOEDAS
			moedas = moedas - qnt_moedas_tira;
			// VE SE O JOGO TERMINOU. SE NAO, TROCA PRA O PROXIMO JOGADOR
			if (moedas == 0)
			{
				cout << "Ganhou Jogador " << jogador_da_vez << endl;
				
				// AUMENTA A PONTUACAO DO JOGADOR QUE GANHOU
				if (jogador_da_vez == 1) pont_jog1 += 1;
				else pont_jog2 += 1;

				// Se um dos jogadores chegar em 3 (três) pontos entao encerra. Se nao, reinicia.
				if(pont_jog1 == 3 || pont_jog2 == 3) sair = true;
				else moedas = 10;

				system("pause");
			}
			else
			{
				if (jogador_da_vez == 1) jogador_da_vez = 2;
				else jogador_da_vez = 1;
			}
		}
		else
		{
			cout << "Numero de moedas invalido. Tente novamente (Digite 1, 3 ou 4)." << endl;

			system("pause");
		}

		// Limpa a tela para a próxima jogada
		system("cls");
	}
	
	if (pont_jog1 > pont_jog2) cout << "Jogador 1 " << jog1 << " Venceu as tres rodadas!" << endl;
	else cout << "Jogador 2 " << jog2 << " Venceu as tres rodadas!" << endl;

	return 0;
}