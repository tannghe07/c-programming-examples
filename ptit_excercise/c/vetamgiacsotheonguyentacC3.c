#include<stdio.h>
int main(){
	int h, a, b, c;
	scanf("%d", &h);
	int arr[h][h];
	for(a=1;a<=h;a++){
		for(b=h;b>=a;b--){
			arr[a][h]=1;
			arr[a][b-1]=arr[a][b]+1;
			printf("%d", arr[a][b]);
		}
		printf("\n");
	}	
	return 0;
}

