#ifndef REGISTRO_H
#define REGISTRO_H

//Deixo o valor que representa o ml de cada frasco mais divertido ;)
typedef int ml;

//Essa classe representa o conteúdo de um frasco
class Registro{

private:
	ml capacidade;

public:
	Registro(const ml&);
	~Registro();

	ml get_capacidade() const;
};

#endif
