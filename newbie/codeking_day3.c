#include<stdio.h>
int main(){
	int t, a, b, i, j, count=0;
	int s[100000];
	int d[100000][2];
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &a, &b);
		for(i=0;i<a;i++){
			for(j=0;j<2;j++) scanf("%d", &d[i][j]);
		}
		for(i=0;i<a;i++){
			for(j=0;j<2;j++){
				while(b){
					if(d[i][0]>d[i][1]){
						if(b>d[i][0]){
							b=b-d[i][0]+d[i][1];
						}
						else break;
					}else break;
				}
			}
			printf("%d ", b);
		}
	}
	return 0;
}

