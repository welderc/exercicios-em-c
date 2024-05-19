#include <stdio.h>
#include <conio.h>

int Qtd=1;

int SolicitaProximaIdade(int vlr) {
	printf("Deseja informar a proxima idade? (s/n) \n");
	char resposta;
	
	scanf("%s", &resposta);
	
	if (resposta == 'S' || resposta == 's') {
		printf("Informe a idade do proximo aluno: ");
		int idade;
		scanf("%i", &idade);
		Qtd+=1;
		return (SolicitaProximaIdade(idade+vlr));
	}
	else
		return (vlr);
}

int main (){
	printf("Indorme a idade do primeiro aluno: ");
	int idade;
	scanf("%i", &idade);
	int soma = SolicitaProximaIdade(idade);
	printf("\n As %i idades somam %i anos e a media eh: %.2f", Qtd,soma, float(soma)/Qtd);
	getch();
}

