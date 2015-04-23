/*DEfinição do tipo Matriz*/
typedef struct matriz Matriz;

/*Cria uma matriz de dimensão m(linha) por n(coluna) e retorna endereço*/
Matriz *create(const int lin, const int col);

/*Libera a memória alocada para a matriz*/
void release(Matriz *matriz);
	
/*Acessa e retorna o elemento da linha i e da coluna j da matriz*/
float acess(Matriz *matriz, const int i, const int j);

/*Atribui o elemento da linha i e da coluna j da matriz*/
void assign(Matriz *matriz, const int i, const int j, float const elem);

/*Devolve o número de linhas da matriz*/
int return_lines(Matriz *matriz);

/*Devolve o número de colunas da matriz*/
int return_columns(Matriz *matriz);

/*FUNÇÕES DE TESTE DA MATRIZ*/

/*Preenche cada campo matriz com value+1*/
void fills_matriz(Matriz *matriz, float value);
/*Emprime elementos da matriz*/
void print_matriz(Matriz *matriz);