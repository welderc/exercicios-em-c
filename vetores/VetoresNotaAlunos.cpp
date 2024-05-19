#include <stdio.h>
#include <string.h>

// Escreva um algoritmo que solicite ao usuário:
// 1) A quantidade de alunos em uma turma .............................. Ok
// 2) Solicite as N notas dos alunos ................................... Ok
// 3) Apresente a Maior, a menor, a média da turma ..................... Ok
// 4) Quantos alunos encontram-se acima da média da turma............... Ok
// 5) Quantos alunos encontram-se abaixo da média da turma.............. OK
// 6) Solicitar também o nome do(a) aluno(a)............................ OK
// 7) Os nomes dos alunos que encontram-se acima da média da turma...... OK
// 8) Os nomes dos alunos que encontram-se abaixo da média da turma..... OK


int main (){
	
	char nomeAluno[50],nomeUnicaNota[50], nomeNotaMaior[50], nomeNotaMenor[50];
	
	int qtdAlunos;
	float maiorNota, menorNota, media;
	float vetorNotas[11];
	int notaAlunoMaior, notaAlunoMenor;
	
	printf("Infome a quantidade de alunos: ");
	scanf("%d", &qtdAlunos);
	
	
	for(int i=1; i <=qtdAlunos; i++) {
	
		// Informe o nome do aluno
		printf("Escreva o nome do aluno: ");
		scanf("%s", &nomeAluno);
		
		// Nota do aluno
		printf("Informe a nota do %d. aluno: ", i);
		scanf("%f", &vetorNotas[i]);
		vetorNotas[0]+= vetorNotas[i];
		
		if (i == 1) { // Só vai entrar aqui na primeira nota e nunca mais 
		    menorNota = vetorNotas[i];
		    maiorNota = vetorNotas[i];
		    notaAlunoMaior = i;
		    notaAlunoMenor = i;
		    strcpy(nomeUnicaNota, nomeAluno);
			strcpy(nomeNotaMaior, nomeAluno);
		    strcpy(nomeNotaMenor, nomeAluno);
		} else {
		    if (vetorNotas[i] > maiorNota) {
		        maiorNota = vetorNotas[i];
		        notaAlunoMaior = i;
		        strcpy(nomeNotaMaior, nomeAluno);
		    }
		    
		    if (vetorNotas[i] < menorNota) {
		        menorNota = vetorNotas[i];
		        notaAlunoMenor = i;
		        strcpy(nomeNotaMenor, nomeAluno);
		    }
		}
			
	}
		media = vetorNotas[0] / qtdAlunos;
		
		if (media > 8){
			printf("A turma esta em cima da media \n");
		}else if (media > 5){
			printf("Turma em Recuperacao \n");
		} else {
			printf("Turma Reprovada \n");
		}
		
		if(menorNota == maiorNota){
			printf("Maior nota prova foi do %s \n%d. nota:%.1f \n\n",nomeUnicaNota,notaAlunoMaior, maiorNota);
		} else {
			printf("Maior nota, prova foi do %s \n%d. nota:%.1f \n\n",nomeNotaMaior, notaAlunoMaior, maiorNota);
			printf("Menor nota, prova foi do %s \n%d. nota:%.1f \n\n",nomeNotaMenor, notaAlunoMenor, menorNota);
		}
		
		
		
		
}

