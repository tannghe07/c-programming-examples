#include<stdio.h>
int main(){
	int a, b, i=0, j=0;
	scanf("%d%d", &a , &b );
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			if(a==b){
				if(i<=j) printf("%d", j);
				else printf("%d", i);
			}
			else if(a<b){
				if(i+b-a>=j) printf("%d", b-a+i);
				else printf("%d", j);
			}
			else{
				if(i<=j+a-b) printf("%d", a-b+j);
				else printf("%d", i);
			}
		}printf("\n");
	}
	return 0;
}

