#include <stdio.h>
//o ponteiro tem que ser na assinatura, e para x e y ser transfordo em poteiro coloca-se o *//
// quando fa�o ponteiros eu passo os endere�os.

void troca(int *x, int *y){
	int aux = *x;
	*x = *y;
	*y = aux;

}


int main(){
	int a, b, c;
	
	printf("  Ordena��o e troca de valores!!\n");
	printf("- - - - - - - - -- - - - - - - - - - -\n");
	
	printf("Informe um valor:\n");
	scanf("%d", &a);
	
	printf("Informe um valor:\n");
	scanf("%d", &b);
	
	printf("Informe um valor:\n");
	scanf("%d", &c);
	
	if(a>b){
		troca(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	}
	
	if(b>c){
		troca(&b, &c);
		printf("b=%d, c=%d\n", b, c);

	}
		if(c<a){
		troca(&c, &a);
		printf("c=%d, a=%d\n", c, a);
	}

	printf("Os valores ordenados s�o: %d, %d, %d\n\n", a, b, c);
	
	printf("Obrigada por interagir!!");
	return 0;
}
