#include <stdio.h>
#include "includes/arvore.h"
#include "includes/lista.h"


int main() {

	int size = 0;
	char operation = 0; 

	while(scanf("%d %c\n", &size, &operation) != EOF){
		

		switch(operation){
			case 'i':
				Arvore::referencia->insere(size, 0);
				break;
			case 'r':
				Arvore::referencia->remove(size);
				break;
			case 'p':
				printf("%d\n", Arvore::inica_busca(size));
				break;
		}

	}
}