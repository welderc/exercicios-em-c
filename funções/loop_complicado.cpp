#include <stdio.h>

int main (){
	for(int x= -1; x<=10; x++){
		printf("---------------\n");
		printf("P:%d\n", x);
		printf("---------------\n");
		for(int y=0; y <=x; y++){
			printf("#########################\n");
			printf("x:%d \n", x);
			printf("y:%d \n", y);
			printf("\ny-%d + x-%d", y,x);
			printf("\nR:%d, \n\n\n", y+x);
			printf("#########################\n");
		}
		
	}
}
