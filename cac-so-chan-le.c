#include<stdio.h>
int main(){
	int n, i;
	printf("Enter an integer number: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		if(i%2==0) 
			printf("\t%d", i);
		if(i%2==1)
			printf("\n\t%d", i);
	}
	return 0;
}

