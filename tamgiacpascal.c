#include<stdio.h>
int gt(int n){
	int gt;
	for(gt=1;n>1;n--){
		gt*=n;
	}return gt;
}
int pt(int a, int b){
	return gt(a) / ( gt(b) * gt(a-b) );
}
int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0; j<=n-i;j++)
		printf(" ");
		for(j=0; j<=i; j++)
		printf("%2d", pt(i,j));
	printf("\n");
	}
	return 0;
}
