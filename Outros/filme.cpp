#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
	// Declaração das variáveis
	char palavra1[20], palavra2[20];

	// Solicitação das escolhas do usuário
	cout << "Escolha uma categoria de filme: "<< endl;
	cout << "Acao, Terror, Romance, Comedia e Ficcao"<< endl;
	cin.getline(palavra1, 20);//primeira palavra a ser comparada
    
    cout <<endl;

	cout << "Insira a pontuacao baseada no RottenTomatoes: "<< endl;
	cout << "Aleatoria, 0p-25p, 25p-50p, 50p-75p, 75p-100p"<< endl;
	cin.getline(palavra2, 20);//segunda palavra a ser comparada
	
    cout <<endl;
    
	// Verificação da categoria escolhida e exibição da mensagem correspondente
	if (strcmp(palavra1, "Acao") == 0)
	{
		cout << "Categoria escolhida: Acao" << endl;
		cout << endl;
		if (strcmp(palavra2, "0p-25p") == 0)
		{

			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Acao", "Classificacao 1"},
				{"Filme 2", "Acao", "Classificacao 2"},
				{"Filme 3", "Acao", "Classificacao 3"},
				{"Filme 4", "Acao", "Classificacao 4"},
				{"Filme 5", "Acao", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;

		}

		else if (strcmp(palavra2, "25p-50p") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Acao", "Classificacao 1"},
				{"Filme 2", "Acao", "Classificacao 2"},
				{"Filme 3", "Acao", "Classificacao 3"},
				{"Filme 4", "Acao", "Classificacao 4"},
				{"Filme 5", "Acao", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;



		}

		else if (strcmp(palavra2, "50p-75p") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Acao", "Classificacao 1"},
				{"Filme 2", "Acao", "Classificacao 2"},
				{"Filme 3", "Acao", "Classificacao 3"},
				{"Filme 4", "Acao", "Classificacao 4"},
				{"Filme 5", "Acao", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;

		}

		else if (strcmp(palavra2, "75p-100p") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Acao", "Classificacao 1"},
				{"Filme 2", "Acao", "Classificacao 2"},
				{"Filme 3", "Acao", "Classificacao 3"},
				{"Filme 4", "Acao", "Classificacao 4"},
				{"Filme 5", "Acao", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;
		}
		
		else if (strcmp(palavra2, "Aleatorio") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Acao", "Classificacao 1"},
				{"Filme 2", "Acao", "Classificacao 2"},
				{"Filme 3", "Acao", "Classificacao 3"},
				{"Filme 4", "Acao", "Classificacao 4"},
				{"Filme 5", "Acao", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;
		}

	}
	else if (strcmp(palavra1, "Terror") == 0)
	{
		cout << "Categoria escolhida: Terror" << endl;
		cout << endl;
		if (strcmp(palavra2, "0p-25p") == 0)
		{

			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Terror", "Classificacao 1"},
				{"Filme 2", "Terror", "Classificacao 2"},
				{"Filme 3", "Terror", "Classificacao 3"},
				{"Filme 4", "Terror", "Classificacao 4"},
				{"Filme 5", "Terror", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;

		}

		else if (strcmp(palavra2, "25p-50p") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Terror", "Classificacao 1"},
				{"Filme 2", "Terror", "Classificacao 2"},
				{"Filme 3", "Terror", "Classificacao 3"},
				{"Filme 4", "Terror", "Classificacao 4"},
				{"Filme 5", "Terror", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;



		}

		else if (strcmp(palavra2, "50p-75p") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Terror", "Classificacao 1"},
				{"Filme 2", "Terror", "Classificacao 2"},
				{"Filme 3", "Terror", "Classificacao 3"},
				{"Filme 4", "Terror", "Classificacao 4"},
				{"Filme 5", "Terror", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;

		}

		else if (strcmp(palavra2, "75p-100p") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Terror", "Classificacao 1"},
				{"Filme 2", "Terror", "Classificacao 2"},
				{"Filme 3", "Terror", "Classificacao 3"},
				{"Filme 4", "Terror", "Classificacao 4"},
				{"Filme 5", "Terror", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;
		}
 
 	    else if (strcmp(palavra2, "Aleatorio") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Terror", "Classificacao 1"},
				{"Filme 2", "Terror", "Classificacao 2"},
				{"Filme 3", "Terror", "Classificacao 3"},
				{"Filme 4", "Terror", "Classificacao 4"},
				{"Filme 5", "Terror", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;
		}

	}
	else if (strcmp(palavra1, "Romance") == 0)
	{
		cout << "Categoria escolhida: Romance" << endl;
		cout << endl;
		if (strcmp(palavra2, "0p-25p") == 0)
		{

			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Romance", "Classificacao 1"},
				{"Filme 2", "Romance", "Classificacao 2"},
				{"Filme 3", "Romance", "Classificacao 3"},
				{"Filme 4", "Romance", "Classificacao 4"},
				{"Filme 5", "Romance", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;

		}

		else if (strcmp(palavra2, "25p-50p") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Romance", "Classificacao 1"},
				{"Filme 2", "Romance", "Classificacao 2"},
				{"Filme 3", "Romance", "Classificacao 3"},
				{"Filme 4", "Romance", "Classificacao 4"},
				{"Filme 5", "Romance", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;



		}

		else if (strcmp(palavra2, "50p-75p") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Romance", "Classificacao 1"},
				{"Filme 2", "Romance", "Classificacao 2"},
				{"Filme 3", "Romance", "Classificacao 3"},
				{"Filme 4", "Romance", "Classificacao 4"},
				{"Filme 5", "Romance", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;

		}

		else if (strcmp(palavra2, "75p-100p") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Romance", "Classificacao 1"},
				{"Filme 2", "Romance", "Classificacao 2"},
				{"Filme 3", "Romance", "Classificacao 3"},
				{"Filme 4", "Romance", "Classificacao 4"},
				{"Filme 5", "Romance", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;
		}
		
		else if (strcmp(palavra2, "Aleatorio") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Romance", "Classificacao 1"},
				{"Filme 2", "Romance", "Classificacao 2"},
				{"Filme 3", "Romance", "Classificacao 3"},
				{"Filme 4", "Romance", "Classificacao 4"},
				{"Filme 5", "Romance", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;
		}

	}
	else if (strcmp(palavra1, "Comedia") == 0)
	{
		cout << "Categoria escolhida: Comedia" << endl;
		cout << endl;
		if (strcmp(palavra2, "0p-25p") == 0)
		{

			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Comedia", "Classificacao 1"},
				{"Filme 2", "Comedia", "Classificacao 2"},
				{"Filme 3", "Comedia", "Classificacao 3"},
				{"Filme 4", "Comedia", "Classificacao 4"},
				{"Filme 5", "Comedia", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;

		}

		else if (strcmp(palavra2, "25p-50p") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Comedia", "Classificacao 1"},
				{"Filme 2", "Comedia", "Classificacao 2"},
				{"Filme 3", "Comedia", "Classificacao 3"},
				{"Filme 4", "Comedia", "Classificacao 4"},
				{"Filme 5", "Comedia", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;



		}

		else if (strcmp(palavra2, "50p-75p") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Comedia", "Classificacao 1"},
				{"Filme 2", "Comedia", "Classificacao 2"},
				{"Filme 3", "Comedia", "Classificacao 3"},
				{"Filme 4", "Comedia", "Classificacao 4"},
				{"Filme 5", "Comedia", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;

		}

		else if (strcmp(palavra2, "75p-100p") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Comedia", "Classificacao 1"},
				{"Filme 2", "Comedia", "Classificacao 2"},
				{"Filme 3", "Comedia", "Classificacao 3"},
				{"Filme 4", "Comedia", "Classificacao 4"},
				{"Filme 5", "Comedia", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;
		}
		
		else if (strcmp(palavra2, "Aleatorio") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Comedia", "Classificacao 1"},
				{"Filme 2", "Comedia", "Classificacao 2"},
				{"Filme 3", "Comedia", "Classificacao 3"},
				{"Filme 4", "Comedia", "Classificacao 4"},
				{"Filme 5", "Comedia", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;
		}

	}
	else if (strcmp(palavra1, "Ficcao") == 0)
	{
		cout << "Categoria escolhida: Ficcao" << endl;
		cout << endl;
		if (strcmp(palavra2, "0p-25p") == 0)
		{

			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Comedia", "Classificacao 1"},
				{"Filme 2", "Comedia", "Classificacao 2"},
				{"Filme 3", "Comedia", "Classificacao 3"},
				{"Filme 4", "Comedia", "Classificacao 4"},
				{"Filme 5", "Comedia", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;

		}

		else if (strcmp(palavra2, "25p-50p") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Comedia", "Classificacao 1"},
				{"Filme 2", "Comedia", "Classificacao 2"},
				{"Filme 3", "Comedia", "Classificacao 3"},
				{"Filme 4", "Comedia", "Classificacao 4"},
				{"Filme 5", "Comedia", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;



		}

		else if (strcmp(palavra2, "50p-75p") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Comedia", "Classificacao 1"},
				{"Filme 2", "Comedia", "Classificacao 2"},
				{"Filme 3", "Comedia", "Classificacao 3"},
				{"Filme 4", "Comedia", "Classificacao 4"},
				{"Filme 5", "Comedia", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;

		}

		else if (strcmp(palavra2, "75p-100p") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Comedia", "Classificacao 1"},
				{"Filme 2", "Comedia", "Classificacao 2"},
				{"Filme 3", "Comedia", "Classificacao 3"},
				{"Filme 4", "Comedia", "Classificacao 4"},
				{"Filme 5", "Comedia", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;
		}
		
		else if (strcmp(palavra2, "Aleatorio") == 0)
		{
			// Definição da matriz de filmes
			const int numFilmes = 5;
			const int numAtributos = 3;

			string filmes[numFilmes][numAtributos] =
			{
				{"Filme 1", "Comedia", "Classificacao 1"},
				{"Filme 2", "Comedia", "Classificacao 2"},
				{"Filme 3", "Comedia", "Classificacao 3"},
				{"Filme 4", "Comedia", "Classificacao 4"},
				{"Filme 5", "Comedia", "Classificacao 5"}
			};

			// Selecionando um filme aleatório
			int indiceAleatorio = rand() % numFilmes;
			string nomeFilme = filmes[indiceAleatorio][0];
			string categoriaFilme = filmes[indiceAleatorio][1];
			string classificacaoFilme = filmes[indiceAleatorio][2];

			// Exibindo o filme selecionado
			cout << "Filme Aleatorio:" << endl;
			cout << "Nome: " << nomeFilme << endl;
			cout << "Categoria: " << categoriaFilme << endl;
			cout << "Classificacao: " << classificacaoFilme << endl;

			return 0;
		}

	}
	else
	{
		cout << "Categoria invalida." << endl;
	}

	// Encerramento do programa
	return 0;
}
