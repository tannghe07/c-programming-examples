#include<stdio.h>
int main(){
	int n, i, j, num=97;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		if(i%2!=0){
			for(j=1;j<=i;j++){
				printf("%c ", num++);
			}num+=i;
		}
		else {
			for(j=1;j<=i;j++){
				printf("%c ", num--);
			}num+=i+1;
		}
		printf("\n");
	}
	return 0;
}

