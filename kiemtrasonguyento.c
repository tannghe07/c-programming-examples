#include<stdio.h>
int main(){
	int a, i, count=0;
	scanf ("%d", &a);
	if(a<2) printf("0");
	else{
	for(i=2;i<a/2;i++){
		if(a%i==0){
			count++;
		}
	}if(count==0) printf("1");
	else printf("0");
	}
	return 0;
}

