typedef struct fila Fila;

Fila *cria(void);
void insere(Fila *f, float v);
int vazia(Fila *f);
float retira(Fila *f);
void libera(Fila *f);
void imprime(Fila *f);