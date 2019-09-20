#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a>b&&a>c){
		printf("%d is the biggest integer", a);
	}else if(b>a&&b>c){
		printf("%d is the biggest integer", b);
	}else if(c>a&&c>b){
		printf("%d is the biggest integer", c);
	}else if(a==b&&a>c){
		printf("%d is the biggest integer", a);
	}else if(a==c&&a>b){
		printf("%d is the biggest integer", a);
	}else if(b==c&&b>a){
		printf("%d is the biggest integer", b);
	}
	return 0;
}
