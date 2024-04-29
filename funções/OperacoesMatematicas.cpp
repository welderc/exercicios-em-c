#include <stdio.h>


// Soma
double Soma (double num1,double num2){
	return num1 + num2;
}

// Subtração
double Subtracao (double num1,double num2){
	return num1 - num2;
}

// Multiplicação
double Multiplicacao (double num1,double num2){
	return num1	* num2;
}

// Potenciação
double Potencia(double num1, double num2) {
    double resultado = 1.0;
    while(num2 > 0) {
        resultado *= num1;
        num2--;
    }
    return resultado;
}




int main() {
    int numero1, numero2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

	printf("\n\n");
    printf("A soma dos numeros %d e %d: %.2f\n", numero1, numero2, Soma(numero1, numero2));
    printf("A subtracao dos numeros %d e %d: %.2f\n", numero1, numero2, Subtracao(numero1, numero2));
    printf("A multiplicacao dos numeros %d e %d: %.2f\n", numero1, numero2, Multiplicacao(numero1, numero2));
    printf("O numero %d elevado a %d: %.2lf\n", numero1, numero2, Potencia(numero1, numero2));


    return 0;
}
