#include "listas.h"
#include "RichSanchez.h"
#include <stdio.h>

int main() {
	RichSanchez BancoDeDados;

	int volume = 0;
	char funcao = 0;
	bool end = true;
	while (scanf("%d %c", &volume, &funcao) != EOF) {
		switch (funcao)
		{
		case 'i':
			BancoDeDados.input(volume);
			break;

		case 'r':
			BancoDeDados.remove(volume);
			break;

		case 'p':
			std::cout << BancoDeDados.calculamininteracoes(volume) << std::endl;
			//std::cout << "O minimo de interacoes para o volume de " << volume << " e " << BancoDeDados.calculamininteracoes(volume) << std::endl;
			break;

		default:
			std::cout << "Operacao nao valida" << std::endl;
		}
	}
}