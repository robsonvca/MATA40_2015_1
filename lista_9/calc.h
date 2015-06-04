typedef struct pilha Pilha;

typedef struct calc Calc;

Pilha *cria_pilha(void);
void push(Pilha *p, float v);
float pop(Pilha *p);
int pilha_vazia(Pilha *p);
void libera_pilha(Pilha *p);

Calc *cria_calc(int f);
void operando(Calc *c, float v);
void operador(Calc *c, char op);
void libera_calc(Calc *c);