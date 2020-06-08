#include<stdio.h>
int main(){
	int a, b, i, j;
	scanf("%d%d", &a, &b);
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			if(a<=b){
				if(i+j>b+1) printf("%d", i+j-b);
				else printf("%d", b-i-j+2);
			}
			else{
				if(i+j>a+1) printf("%d", i+j-a);
				else printf("%d", a-i-j+2);
			}
		}
		printf("\n");
	}
	return 0;
}

