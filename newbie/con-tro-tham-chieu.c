#include<stdio.h>
void  volume( int *x){
	*x=(*x)*(*x)*(*x);
}
int main(){
	int x=5;
	printf("%d", x);
	volume(&x);
	printf("\n%d", x);
	return 0;
}

