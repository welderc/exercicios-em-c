#include <stdio.h>

int main (){
	for(int i= 1; i<=20; i+= 1){
		printf("i-%d, ", i);
		if(i % 3 == 2){
			printf("   r-%d   ", i);
		}
	}
}
