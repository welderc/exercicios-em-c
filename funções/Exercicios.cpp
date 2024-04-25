//escreva um algoritmo que solicite ao usuário dois valores do tipo real e no final apresente .
//1) As quatro operações aritméticas básicas.
//2) Exponencial (base elevado a altura)

#include <stdio.h>
#include <conio.h>
#include <math.h>


// Função para realizar as operações aritméticas básicas
void operacoes_aritmeticas(float num1, float num2) {
    printf("Soma: %.2f\n", num1 + num2);
    printf("Subtracao: %.2f\n", num1 - num2);
    printf("Multiplicacao: %.2f\n", num1 * num2);
    printf("Divisao: %.2f\n", num1 / num2);
}

// Função para calcular a exponencial
void exponencial(float base, float altura) {
    printf("Exponencial: %.2f\n", pow(base, altura));
}

int main() {
    float num1, num2;

    // Solicita ao usuário dois valores do tipo real
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Realiza as operações aritméticas básicas
    operacoes_aritmeticas(num1, num2);

    // Calcula a exponencial
    exponencial(num1, num2);

	getch();
	
    return 0;
}

