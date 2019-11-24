#include<stdio.h>
int main(){
	int n, i;
	printf("Enter an integer number: ");
	scanf("%d", &n);
	for(i=0; i<=n; i++){
		if(i%2==1) 
			continue;// loai bo cac so le
			printf("\n%d", i);
	}
	return 0;
}

