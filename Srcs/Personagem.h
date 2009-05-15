#ifndef PERSONAGEM_H
#define PERSONAGEM_H

class Personagem : public Objeto
{	
public :

		/*SDL_Surface* imagem;
		SDL_Rect quadro, posicao;
		bool visivel;*/
		bool vivo;
		int velocidade ;
		int preco;
		int energia;
		int ataque_valor;
		int ataque_porcentagem;
		int direcao;
		int vel_x,vel_y;
		int veltiro;

		char nome[30];

		//booleanos de movimento e anima��o, atributos, etc...
		bool virado_direita;
		bool animando_parado_esquerda;
		bool animando_parado_direita;
		bool movendo_direita;
		bool movendo_esquerda;
		bool movendo_cima_esquerda;
		bool movendo_cima_direita;
		bool movendo_baixo_esquerda;
		bool movendo_baixo_direita;
		bool animando_parado;
		bool pulando_direita;
		bool pulando_esquerda;
		bool caindo_direita;
		bool caindo_esquerda;
		bool atacando;
		bool atacando_outro;
		bool animando_morte;

		void atacar(int);
	
		int altura_atual;
		int altura_max;
		int altura_pulo;
		int velocidade_pulo;
		int valor_recompenca;

		int tempo_movendo_direita;
		int qtd_telas_movendo_direita;
		int tela_movendo_direita;
		int qtd_tempo_movendo_direita;

		int tempo_movendo_esquerda;
		int qtd_telas_movendo_esquerda;
		int tela_movendo_esquerda;
		int qtd_tempo_movendo_esquerda;

		int tempo_atacando;
		int qtd_tempo_atacando;
		int tela_atacando;
		int qtd_tela_atacando;

		Mix_Chunk* morrendo;
		Mix_Chunk* parando;
		Mix_Chunk* acelerando;

		int vidas;
		int pontos;
		int tempo;

		
};

void Personagem::atacar(int quem)
{

};

Personagem personagem;
Personagem Nave;

class Tiros : public Objeto
{
public:

	int direcao;
	int vel_x,vel_y;

private:
		
};

Tiros Tiro[QTD_TIROS];

#endif
