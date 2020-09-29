#include<stdio.h>
int main(){
	int a, b, i, j;
	scanf("%d%d", &a, &b);
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			if(i==j) printf("1");
			else if(i>j) printf("%d", i-j+1);
			else if(i<j) printf("%d", j-i+1);
		}
		printf("\n");
	}
	return 0;
}

