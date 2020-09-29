#include<stdio.h>
int main(){
	int a, i, j=0;
	scanf("%d", &a);
	for(i=1;i<a;i++){
		if(a%i==0){
			j+=i;
		}
	}if(a==j) printf("1");
	else printf("0");
	return 0;
}

