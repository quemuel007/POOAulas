/*
	Prova de Programação Orientada a Objetos (POO)
	Curso Técnico em Prog. de Jogos Digitais
 
	Prof. Marcelo de Barros			IFRN - 14/06/2016
  
	Aluno:

			BEM VINDO AO UNIVERSO STAR WARS!

	Nesse jogo, iremos fazer um duelo de naves espaciais.
			Apertem os cintos e boa prova.
 
 */
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;

// Função para mostrar a tela de FIM DE JOGO.
void fim();

/*
	Leia atentamente as instruções.
	Responda a prova em silêncio.

	Instruções:

		O código está incompleto! 

	1. Leia a prova de cabo a rabo.
	2. Entenda o que o código faz. Execute para ter uma ideia do que está feito até o momento.
	3. Preencha os comentários nas ----- QUESTÕES ----- com o código que está faltando.
    4. Teste!
    5. Repita 3 e 4.

	Se necessário, use uma folha para lhe auxiliar! Copie o nome das variáveis e seus valores.

	Boa sorte!

 */
int main()
{
	/*
		----- QUESTÃO 1. Imprima 5 (cinco) linhas utilizando um laço for. -----
		
		Dica: Como eu imprimo uma linha?
		Dica: Sei como imprimir uma linha? Se sim, repito isso 5 (cinco) vezes!
		Dica: Não vale fazer cout << endl << endl << endl << endl << endl;
	*/
	// Coloque o código aqui!
	cout << "		A long time ago in a galaxy far," << endl;
	cout << "		far away...." << endl;

	/*
		----- QUESTÃO 1. Repita o código da Questão 1 aqui. -----
	*/
	// Coloque o código aqui!
	system("pause");
	system("cls");

	cout << endl << endl;
	cout << "	     8888888888  888    88888" << endl;
	cout << " 	    88     88   88 88   88  88" << endl;
	cout << "	     8888  88  88   88  88888" << endl;
	cout << "	        88 88 888888888 88   88" << endl;
	cout << "	 88888888  88 88     88 88    888888" << endl;
	cout << endl;
	/*
		----- QUESTÃO 2. Um programador, por acidente, deu espaços a mais no começo dos seus "cout". 
		Remova os espaços desnecessários, de modo que forme a palavra "WARS" corretamente na tela. -----
		
		Dica: Na tela do editor, o texto deve ficar igual ao que você deseja mostrar na tela do programa!
		Dica: Não mexa nas linhas marcadas! Elas já estão na posição correta.
	*/
	cout << "	 88  88  88   888    88888    888888" << endl;	// Não mexa nessa linha.
	cout << "			 88  88  88  88 88   88  88  88" << endl;
	cout << "						88 8888 88 88   88  88888    8888" << endl;
	cout << "					888  888 888888888 88   88     88" << endl;
	cout << "	   88  88  88     88 88    8888888" << endl;	// Não mexa nessa linha.

	cout << endl << endl;
	system("pause");
	system("cls");

	bool sair = false;

	/*
		O jogo possui duas naves: a Tie-Fighter e a X-Wing.
		Ambas começam com 40 de vida!

		A Tie-Fighter tem Ataque 2 e Defesa 3.
		A X-Wing	  tem Ataque 1 e Defesa 4.
	*/
	int vida_tie = 40, vida_xwing = 40;
	int atq_tie = 2, def_tie = 3;
	int atq_xwing = 1, def_xwing = 4;
	
	/*
		Ambas as naves iniciam o jogo com estado "Inteiro",
		pois ainda não foram atacadas e estão intactas.
	*/
	string estado_tie = "Inteiro";
	string estado_xwing = "Inteiro";

	// Variável que será usada para calcular o dano nas naves.
	int dano;

	srand((int)time(0));

	// Enquanto não pedirmos para sair. Execute o jogo!
	while (!sair)
	{
		cout << endl;
		cout << "Tie-Fighter ataca com Ataque " << atq_tie << " contra defesa " << def_xwing << " da X-Wing." << endl;
		/*
			----- QUESTÃO 3. Conserte a linha abaixo para gerar um número aleatório que comece em "atq_tie" e vá até 10. -----

			Dica: Do jeito que está, o número gerado estará em qual intervalo?
		*/
		dano = rand() % 30 + 1;
		// Subtrai a defesa da nave inimiga do dano causado. A defesa serve como uma proteção, diminuindo o dano.
		dano = dano - def_xwing;
		// O dano não pode ser negativo! Se o dano for menor do que zero (ou seja, negativo), então transforme esse dano em 0 (zero)!
		if (dano < 0) dano = 0;
		cout << "Tie-Fighter causa " << dano << " de dano na X-Wing." << endl;
		// Causa o dano na Nave adversária. Por exemplo, a vida dela que era 40 agora será (40 - dano). 
		vida_xwing = vida_xwing - dano;

		cout << endl;
		cout << "X-Wing ataca com Ataque " << atq_xwing << " contra defesa " << def_tie << " do Tie-Fighter." << endl;
		/*
			----- QUESTÃO 3. Repita a alteração da Questão 3 também na linha abaixo. -----

			ATENÇÃO: Dessa vez utilize "atq_xwing" ao invés de "atq_tie", pois agora quem ataca é a X-Wing!
		*/
		dano = rand() % 30 + 1;
		dano = dano - def_tie;
		if (dano < 0) dano = 0;
		cout << "X-Wing causa " << dano << " de dano no Tie-Fighter." << endl; 
		vida_tie = vida_tie - dano;

		/*
			----- QUESTÃO 4. Complete os condicionais abaixo. -----
			
			Deve mudar o estado da nave de acordo com a seguinte tabela:
			Vida				Estado
			entre 31 e 40		"Danos na Nave"
			entre 21 e 30		"Nave Avariada"
			entre 11 e 20		"Enfraquecida"
			entre 1 e 10		"Estado Critico"
			0 ou menos			"Destruida"

			Complete com os que estão faltando.

			Dica: Coloque o código onde se pede!
		*/
		if (vida_xwing > 30 && vida_xwing < 40) estado_xwing = "Danos na Nave";
		else if (vida_xwing > 20) estado_xwing = "Nave Avariada";
		// Coloque o código aqui!
		
		/*
			----- QUESTÃO 4. Faça o mesmo para a outra nave. -----
		*/
		if (vida_tie > 30 && vida_tie < 40) estado_tie = "Danos na Nave";
		else if (vida_tie > 20) estado_tie = "Nave Avariada";
		// Coloque o código aqui!


		cout << "	        			*       *" << endl;
		cout << "	 /  _  \\		         \\     /" << endl;
		cout << "	|-=(_)=-|		          :>o<:" << endl;
		cout << "	 \\     /		         /     \\" << endl;
		cout << "				        *       *" << endl;
		cout << endl;
		cout << "	Tie-Fighter			X-Wing" << endl;
		cout << "	Energia: " << vida_tie << "			Energia: " << vida_xwing << endl;
		cout << "	" << estado_tie << "			" << estado_xwing << endl;

		cout << endl;
		system("pause");
		system("cls");

		/*
			----- QUESTÃO 5. Adicione um condicional para encerrar o jogo quando uma 
							 das duas naves chegar em 0 (zero) ou menos de vida. -----
		*/
		// Coloque o código aqui!
	}

	/*
		----- QUESTÃO 6. Adicione um comando para ativar a função "fim". -----

		Dica: Como eu faço para ativar um super-poder (função)?
	*/
	// Coloque o código aqui!

	return 0;
}

// Função responsável por mostrar a tela de Fim de Jogo.
void fim()
{
	cout << "		FIM DE JOGO " << endl;
	cout << "      _______              _______" << endl;
	cout << "     /\\:::::/\\            /\\:::::/\\" << endl;
	cout << "    /::\\:::/::\\          /==\\:::/::\\" << endl;
	cout << "   /::::\\_/::::\\   .--. /====\\_/::::\\" << endl;
	cout << "  /_____/ \\_____\\-' .-.`-----' \\_____\\" << endl;
	cout << "  \\:::::\\_/:::::/-. `-'.-----._/:::::/" << endl;
	cout << "   \\::::/:\\::::/   `--' \\::::/:\\::::/" << endl;
	cout << "    \\::/:::\\::/          \\::/:::\\::/" << endl;
	cout << "     \\/:::::\\/            \\/:::::\\/" << endl;
	cout << "      \"\"\"\"\"\"               \"\"\"\"\"\"" << endl
}




/*
	Código por https://github.com/marcelomesmo/POOAulas
	Desenhos ASCII retirados de http://www.asciimation.co.nz
*/