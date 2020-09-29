#include<stdio.h>
int main(){
	int h, a, b, c;
	scanf("%d", &h);
	int arr[h][h];
	for(a=1;a<=h;a++){
		for(b=1;b<=a;b++){
			if(a==b) arr[a][b]=h;
					arr[a+1][b]=arr[a][b]-1;
			printf("%d", arr[a][b]);
		}
		printf("\n");
	}
	return 0;
}

