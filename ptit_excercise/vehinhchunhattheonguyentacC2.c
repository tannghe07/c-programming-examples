#include<stdio.h>
int main(){
	int a, b, i, j;
	scanf("%d%d", &a, &b);
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			if(a==b){
				if(i<=a-j+1) printf("%d", i+j-1);
				else printf("%d", 2*a-i-j+1);
			}
			else if(a<b){
				if(i<=b-j+1) printf("%d", i+j-1);
				else printf("%d", 2*b-i-j+1);
			}
			else{
				if(i<=b){
					if(i<=b-j+1) printf("%d", i+j-1);
					else printf("%d", 2*b-i-j+1);
				}
				else printf("%d", i-j+1);
				
			}
		}
		printf("\n");
	}
	return 0;
}

