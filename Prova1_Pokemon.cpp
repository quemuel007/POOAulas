/*
	Prova de Programação Orientada a Objetos (POO)
	Curso Técnico em Prog. de Jogos Digitais

	Prof. Marcelo de Barros			IFRN - 14/06/2016

	Aluno:

				BEM VINDO AO MUNDO DE POKEMON

	Nesse jogo, iremos fazer uma tela de personagem e testar
				os poderes do nosso Pikachu.
			
				Vamos captura-los! Boa prova!

*/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;

/*
	Leia atentamente as instruções.
	Responda a prova em silêncio.

	Instruções:

	O código está incompleto!

	1. Leia a prova de cabo a rabo.
	2. Entenda o que o código faz. Execute se necessário.
	3. Preencha os comentários em ----- MAIÚSCULO ----- com o código que está faltando.
	4. Teste!
	5. Repita 3 e 4.

	Se necessário, use uma folha para lhe auxiliar! Copie o nome das variáveis e seus valores.

	Boa sorte!

*/
int main()
{
	cout << endl << endl << endl << endl << endl;
	cout << "		Gotta catch 'em" << endl;
	cout << "		Gotta catch 'em all" << endl;
	cout << endl << endl << endl << endl << endl;

	system("pause");
	system("cls");

	/*
		----- QUESTÃO 1. Um programador, por acidente, colocou o nome do jogo em duas linhas diferentes.
		Faça a correção no texto, de modo que forme a palavra "POKEMON" em uma única linha. -----

		Dica: Na tela do editor, o texto deve ficar igual ao que você deseja mostrar na tela do programa!
		Dica: Adicione o texto dos "couts" de baixo nos "couts" de cima.
	*/
	cout << endl << endl;
	cout << "                        88" << endl;
	cout << "                        88" << endl;
	cout << "                        88" << endl;
	cout << "8b,dPPYba,   ,adPPYba,  88   ,d8  ,adPPYba, 88,dPYba,,adPYba," << endl;
	cout << "88P'     8a a8       8a 88 ,a8   a8P_____88 88P'    88      8a" << endl;
	cout << "88       d8 8b       d8 8888[    8PP'''''   88      88      88" << endl;
	cout << "88b,   ,a8  `8a,   ,a8  88` Yba,  8b,   ,aa 88      88      88" << endl;
	cout << "88`YbbdP'     `YbbdP'   88   `Y8a  `Ybbd8'  88      88      88" << endl;
	cout << "88" << endl;
	cout << "88" << endl;

	cout << "  ,adPPYba,  8b,dPPYba," << endl;
	cout << " a8       8a 88P'    `8a" << endl;
	cout << " 8b       d8 88       88" << endl;
	cout << " `8a,   ,a8  88       88" << endl;
	cout << "   `YbbdP'   88       88" << endl;

	cout << endl << endl;

	system("pause");
	system("cls");

	bool sair = false;

	// Vida do personagem.
	int vida = 10;
	// Os atributos de Resistência, Força e Velocidade do personagem.
	int resistencia = 1, forca = 4, velocidade = 2;
	// Indica o nível de treinamento do personagem.
	string nivel = "Normal";

	int dano;
	srand((int)time(0));

	// Enquanto sair for falso.
	while (!sair)
	{
		// Mostra o personagem tela e seus atributos.
		cout << "`;-.          ___," << endl;
		cout << "  `.`\\_...._/`.-\"`				Vida: " << vida << endl;
		cout << "    \\        /      ," << endl;
		cout << "    / _   _ \\    .' `-._			Forca: " << forca << endl;
		cout << "   |)   .   ()\\  /   _.'			Velocidade: " << velocidade << endl;
		cout << "   \\   ~~~    ,; '. <" << endl;
		cout << "    ;.__     ,;|   > \\				" << nivel << endl;
		cout << "   / ,    / ,  |.-'.-'" << endl;
		cout << "  (_/    (_/ ,;|.<`				Pikachu" << endl;
		cout << "    \\    ,     ;-`" << endl;
		cout << "     >   \\    /" << endl;
		cout << "    (_,-'`> .'" << endl;
		cout << "      (_,'" << endl;
		cout << endl << endl;

		// Pede para o usuário digitar uma das 3 (três) opções.
		cout << "Voce deseja aumentar:" << endl << "(Digite o numero correspondente e aperte ENTER)" << endl;
		cout << "1- Resistencia" << endl << "2- Forca" << endl << "3- Velocidade" << endl;
		int opcao;
		/*
			----- QUESTÃO 2. Faça um comando que leia a variável "opcao" do teclado. -----

			Dica: Como faço para ler uma variável digitada pelo usuário?
		*/
		// Coloque o código aqui!

		// Aumenta os atributos de acordo com a opção selecionada pelo usuário.
		if (opcao == 1)	resistencia++;
		else if (opcao == 2) forca++;
		else if (opcao == 3) velocidade++;

		/*
			----- QUESTÃO 3. Adicione um comando para somar o dobro da Resistência à Vida do personagem. -----

			Dica: Como faço para somar um valor na variável "vida"?
			Dica: Sei como fazer isso? Então devo somar o dobro da Resistência.
		*/
		// Coloque o código aqui!

		/*
			----- QUESTÃO 4. Complete o condicional abaixo. -----
		
			Deve mudar o nível de treinamento do personagem de acordo com a seguinte tabela:
			Vida					Nível
			entre 12 e 16			"Treinando"
			entre 17 e 22			"Forte"
			maior que 22			"Muito Forte"

			Complete com os que estão faltando.

			Dica: Coloque o código onde se pede!
		*/
		if (vida > 12 && vida <= 16) nivel = "Treinando";
		// Coloque o código aqui!

		/*
			----- QUESTÃO 5. Faça um laço para repetir as instruções abaixo 3 (três) vezes. -----

			Dica: Precisamos repetir as 4 (quatro) linhas abaixo.
			Dica: Sei como repetir um comando? Da mesma forma repetimos mais de um, basta colocar tudo junto no laço.
			Dica: Lembre-se de usar o { } corretamente.
		*/
		// Coloque o código aqui!
			cout << "Pikachu esta testando seus ataques." << endl;
			dano = rand() % 20 + 1;
			dano = dano * forca;
			cout << "Pikachu causa " << dano << " de dano." << endl;

		cout << endl;
		system("pause");
		system("cls");

		/*
			----- QUESTÃO 6. Adicione um condicional para encerrar o jogo quando o 
							 "nivel" do personagem for "Muito Forte". -----
		*/
		// Coloque o código aqui!
	}
	
	cout << endl << endl;
	cout << "             _" << endl;
	cout << "            | |" << endl;
	cout << " _ __   ___ | | _____ _ __ ___   ___  _ __" << endl;
	cout << "| '_ \\ / _ \\| |/ / _ \\ '_ ` _ \\ / _ \\| '_ \\" << endl;
	cout << "| |_) | (_) |   <  __/ | | | | | (_) | | | |" << endl;
	cout << "| .__/ \\___/|_|\\_\\___|_| |_| |_|\\___/|_| |_|" << endl;
	cout << "| |" << endl;
	cout << "|_|" << endl;
	cout << endl << endl;

	return 0;
}

/*
Código por https://github.com/marcelomesmo/POOAulas
Desenhos ASCII retirados de http://ascii.co.uk/art/pokemon
*/