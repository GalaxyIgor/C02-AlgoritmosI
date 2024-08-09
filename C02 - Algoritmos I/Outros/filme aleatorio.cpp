#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	
    srand(time(NULL));
	// Mostra Escolhendo um filme
	cout << "Escolhendo um filme" << endl;


	string filmes[160][3] =
	{
		{"Matrix", "Acao", "Classificação 4"},
		{"Inception", "Acao", "Classificação 4"},
		{"O Exterminador do Futuro 2: O Julgamento Final", "Acao", "Classificação 4"},
		{"Duro de Matar", "Acao", "Classificação 4"},
		{"Gladiador", "Acao", "Classificação 4"},
		{"O Senhor dos Anéis: O Retorno do Rei", "Acao", "Classificação 4"},
		{"Batman: O Cavaleiro das Trevas", "Acao", "Classificação 4"},
		{"Interestelar", "Acao", "Classificação 4"},
		{"Clube da Luta", "Acao", "Classificação 4"},
		{"O Resgate do Soldado Ryan", "Acao", "Classificação 4"},
		{"O Grande Herói", "Acao", "Classificação 4"},
		{"O Homem de Aço", "Acao", "Classificação 3"},
		{"Rogue One: Uma História Star Wars", "Acao", "Classificação 4"},
		{"Círculo de Fogo", "Acao", "Classificação 3"},
		{"Bumblebee", "Acao", "Classificação 3"},
		{"Kingsman: Serviço Secreto", "Acao", "Classificação 4"},
		{"Scott Pilgrim Contra o Mundo", "Acao", "Classificação 4"},
		{"O Ultimato Bourne", "Acao", "Classificação 3"},
		{"Carga Explosiva", "Acao", "Classificação 3"},
		{"Caçadores de Emoção", "Acao", "Classificação 3"},
		{"Blade: O Caçador de Vampiros", "Acao", "Classificação 3"},
		{"Oblivion", "Acao", "Classificação 3"},
		{"A Identidade Bourne", "Acao", "Classificação 3"},
		{"Operação Chromite", "Acao", "Classificação 3"},
		{"O Grande Mestre", "Acao", "Classificação 4"},
		{"A Supremacia Bourne", "Acao", "Classificação 3"},
		{"22 Milhas", "Acao", "Classificação 3"},
		{"O Ataque", "Acao", "Classificação 3"},
		{"Cowboys & Aliens", "Acao", "Classificação 3"},
		{"O Grande Dragão Branco", "Acao", "Classificação 3"},
		{"Desejo de Matar", "Acao", "Classificação 3"},
		{"Velocidade Máxima", "Acao", "Classificação 3"},
		{"O Franco Atirador", "Acao", "Classificação 3"},
		{"A Hora do Rush", "Acao", "Classificação 3"},
		{"Operação Sombra: Jack Ryan", "Acao", "Classificação 3"},
		{"O Ataque dos Vermes Malditos", "Acao", "Classificação 3"},
		{"Machete", "Acao", "Classificação 3"},
		{"Duro de Matar", "Acao", "Classificação 5"},
		{"Velozes e Furiosos", "Acao", "Classificação 4"},
		{"John Wick", "Acao", "Classificação 4"},
		{"Missão Impossível", "Acao", "Classificação 4"},
		{"Mad Max:Estrada da Fúria", "Acao", "Classificação 4"},
		{"O Protetor", "Ação", "Classificação 3"},
		{"Os Mercenários", "Ação", "Classificação 3"},
		{"Atômica", "Ação", "Classificação 3"},
		{"Operação Invasão", "Ação", "Classificação 4"},
		{"Kill Bill:Volume 1", "Ação", "Classificação 4"},
		{"Busca Implacável", "Ação", "Classificação 3"},
		{"Dredd", "Ação", "Classificação 3"},
		{"Django Livre", "Ação", "Classificação 4"},
		{"Matrix", "Ação", "Classificação 4"},
		{"O Exterminador do Futuro", "Ação", "Classificação 4"},
		{"Aliens, o Resgate", "Ação", "Classificação 4"},
		{"Homem de Ferro", "Ação", "Classificação 4"},
		{"Círculo de Fogo", "Ação", "Classificação 3"},
		{"Rambo:Programado Para Matar", "Ação", "Classificação 4"},
		{"Blade Runner 2049", "Ação", "Classificação 4"},
		{"Esquadrão Suicida", "Ação", "Classificação 3"},
		{"O Grande Herói", "Ação", "Classificação 4"},
		{"Vingadores:Ultimato", "Ação", "Classificação 4"},
		{"O Regresso", "Ação", "Classificação 4"},
		{"Capitão América:O Soldado Invernal", "Ação", "Classificação 4"},
		{"Jurassic Park", "Ação", "Classificação 4"},
		{"Homem - Aranha:De Volta ao Lar", "Ação", "Classificação 4"},
		{"Planeta dos Macacos:O Confronto", "Ação", "Classificação 4"},
		{"A Origem", "Ação", "Classificação 4"},
		{"O Resgate do Soldado Ryan", "Ação", "Classificação 4"},
		{"Duro de Matar", "Ação", "Classificação 5"},
		{"Velozes e Furiosos", "Ação", "Classificação 4"},
		{"John Wick", "Ação", "Classificação 4"},
		{"Missão Impossível", "Ação", "Classificação 4"},
		{"O Protetor", "Ação", "Classificação 3"},
		{"Os Mercenários", "Ação", "Classificação 3"},
		{"Atômica", "Ação", "Classificação 3"},
		{"Operação Invasão", "Ação", "Classificação 4"},
		{"Busca Implacável", "Ação", "Classificação 3"},
		{"Dredd", "Ação", "Classificação 3"},
		{"Django Livre", "Ação", "Classificação 4"},
		{"Matrix", "Ação", "Classificação 4"},
		{"O Exterminador do Futuro", "Ação", "Classificação 4"},
		{"Aliens, o Resgate", "Ação", "Classificação 4"},
		{"Homem de Ferro", "Ação", "Classificação 4"},
		{"Círculo de Fogo", "Ação", "Classificação 3"},
		{"Blade Runner 2049", "Ação", "Classificação 4"},
		{"Esquadrão Suicida", "Ação", "Classificação 3"},
		{"O Grande Herói", "Ação", "Classificação 4"},
		{"O Regresso", "Ação", "Classificação 4"},
		{"Jurassic Park", "Ação", "Classificação 4"},
		{"A Origem", "Ação", "Classificação 4"},
		{"O Resgate do Soldado Ryan", "Ação", "Classificação 4"}
	};
    
	
	cout << "Filme Aleatorio: " << endl;
	cout << endl;
	cout << "Nome: " << nomeFilme << endl;
	cout << "Categoria: " << categoriaFilme << endl;
	cout << "Classificacao: " << classificacaoFilme << endl;

	return 0;
}
