#include <stdio.h>

int Calcula (int n) {
	
    if (n == 0){
    	return(0);
	} else {
		printf("%d ", n);
		return(n + Calcula(n-1));
	}
	
	printf("%d ", n);
	
	}


int main() {
    int numero1;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    
    Calcula(numero1);
    
    return 0;
}
