#include <stdio.h>
//o ponteiro tem que ser na assinatura, e para x e y ser transfordo em poteiro coloca-se o *//

void troca(int *x, int *y){
	int aux = *x;
	*x = *y;
	*y = aux;

}


int main(){
	int a, b;
	
	a = 5;
	b = 3;
	troca(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	
	return 0;
}
