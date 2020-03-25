#include<stdio.h>
int main(){
	int a, count=0;
	scanf ("%d", &a);
	while(a){
		a/=10;
		count++;
	}
	printf("%d", count);
	return 0;
}

