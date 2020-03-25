#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	srand(time(NULL));
	int i, j;
	for(i=0; i<1; i++){
		int random = 1+rand()%7;
		printf("%5d", random);
	}

	return 0;
}

