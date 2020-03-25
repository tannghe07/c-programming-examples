#include<stdio.h>
int main(){
	int n, a, b, c, e, f;
	scanf("%d", &n);
	for(a=1;a<=n;a++){
		for(b=n;b>a;b--){
			printf("~");
		}
		for(c=1;c<=2*a-1;c++){
			printf("*");
		}
		printf("\n");
	}
	for(a=1;a<=n;a++){
		for(e=1;e<a;e++){
			printf("~");
		}
		for(f=2*n;f>2*a;f--){
			if(f==2*n) printf(" ");
			else printf("*");
		}
		printf("\n");
	}

	return 0;
}

