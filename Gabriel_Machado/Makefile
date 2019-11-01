# == VARIAVEIS ===
# ================
#
# Podemos declarar algumas variaveis dentro do Makefile (sintaxe similar a bash)
# Isso facilita o seu trabalho caso voce opte trocar alguma versao do
# compilador ou flag para seu processo de compilacao
# Uma variavel com nome VAR eh declarada da seguinte maneira:
# 	VAR=conteudo
# e eh chamada atraves do comando $(VAR)

CC=g++ # compilador, troque para gcc se preferir utilizar C
CFLAGS=-Wall -Wextra # compiler flags, troque o que quiser, exceto bibliotecas externas
EXEC=./tp1 # nome do executavel que sera gerado, nao troque
TMPOUT=tp1.testresult
vpath %.cpp src
vpath %.h src/includes

# === REGRAS =====
# ================
# 
# Aqui declaramos as nossas regras de compilacao.
# Para chamar uma regra, podemos simplesmente digitar
# 	make nome_regra
# Exs.:
# 	make ./tp1
# 	make foo.o
# 	make clean
# Cada regra de compilacao tem a seguinte sintaxe:
#
# NOME_OUTPUT: DEPENDENCIAS
# 	CMD
#
# NOME_OUTPUT eh o nome do arquivo que vai ser gerado (ou qualquer nome caso
# nenhum arquivo seja gerado, ex. clean)
# DEPENDENCIAS sao os nomes dos arquivos necessarios para executar essa regra
# de compilacao
# CMD sao os comandos necessarios para executar a regra (por exemplo, chamar o
# gcc)

$(EXEC): main.o registro.o recipiente.o lista.o fila.o arvore.o
	${CC} $(CCFLAGS) -o $(EXEC) main.o registro.o recipiente.o lista.o fila.o arvore.o

main.o: main.cpp registro.h
	${CC} $(CCFLAGS) -c src/main.cpp

registro.o: registro.cpp registro.h
	${CC} $(CCFLAGS) -c src/registro.cpp

recipiente.o: recipiente.cpp recipiente.h registro.h
	${CC} $(CCFLAGS) -c src/recipiente.cpp

lista.o: lista.cpp lista.h recipiente.h
	${CC} $(CCFLAGS) -c src/lista.cpp

fila.o: fila.cpp fila.h lista.h recipiente.h
	${CC} $(CCFLAGS) -c src/fila.cpp

arvore.o: arvore.cpp arvore.h fila.h lista.h recipiente.h
	${CC} $(CCFLAGS) -c src/arvore.cpp

test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean: # remove todos os arquivos temporarios que forem gerados pela compilacao
	rm -rf *.o $(EXEC) tp1.testresult

# === OUTROS =====
# ================
# 
# Para mais informacoes sobre o Makefile, procure os monitores ou consulte
# outras referencias disponiveis na internet como:
# https://opensource.com/article/18/8/what-how-makefile
