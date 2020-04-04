#include<stdio.h>
int main(){
	int n, i, j, value;
	scanf("%d", &n);
	int hangtren=0, hangduoi=n-1, cottrai=0, cotphai=n-1;
	int arr[100][100];
	value=n*n;
	while(value>=1){
		for(j=cottrai;j<=cotphai;j++){
			arr[hangtren][j]=value--;
		}
		hangtren++;
		for(i=hangtren;i<=hangduoi;i++){
			arr[i][cotphai]=value--;
		}
		cotphai--;
		for(j=cotphai;j>=cottrai;j--){
			arr[hangduoi][j]=value--;
		}
		hangduoi--;
		for(i=hangduoi;i>=hangtren;i--){
			arr[i][cottrai]=value--;
		}
		cottrai++;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

