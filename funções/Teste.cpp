#include <stdio.h>

int main (){
	for(int x= 0; x<=1; x++){
		printf("x-%d, ", x);
		for(int y=0; y<=x; y++){
		printf("y-%d, ", y);
		printf("   %d    ", x*y+x);
	}
	}
}
