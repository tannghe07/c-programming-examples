#include<stdio.h>
int main(){
	int i, j, count;
	printf("In bang so: \n");
	for(i=1; i<=5; i++){
		for(j=i;j<=50; j+=5)
		printf("%3d", j);
		printf("\n");
	}
	return 0;
}

