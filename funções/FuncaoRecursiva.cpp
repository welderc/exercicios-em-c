#include <stdio.h>
#include <conio.h>


float Soma (float A, float B){
	
	return(A + B);
}


int main () {
	
	float Num1, Num2, soma;
	
	printf("Informe o primeiro numero: ");
	scanf("%f", &Num1);
	
	
	printf("Informe o segundo numero: ");
	scanf("%f", &Num2);
	

	
	printf("A soma: %.2f \n", Soma(Num1, Num2));
	getch();
	
}
