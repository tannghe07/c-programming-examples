#include<stdio.h>
#include<stdbool.h>
bool kt(int n){
	int i;
	if(n<2) return false;
	for(i=2;i<n;i++){
		if(n%i==0) return false;
	}
	return true;
}
int snt(int n){
	int i, count=0;
	for(i=0;i<1000;i++){
		if(kt(i)){
			count++;
			if(count==n){
				return i;
				break;
			}
		}
	}
}
int main(){
	int n, i, j, value=1;
	scanf("%d", &n);
	int hangtren=0, hangduoi=n-1, cottrai=0, cotphai=n-1;
	int arr[100][100];
	while(value<=n*n){
		for(j=cottrai;j<=cotphai;j++){
			arr[hangtren][j]=value++;
		}
		hangtren++;
		for(i=hangtren;i<=hangduoi;i++){
			arr[i][cotphai]=value++;
		}
		cotphai--;
		for(j=cotphai;j>=cottrai;j--){
			arr[hangduoi][j]=value++;
		}
		hangduoi--;
		for(i=hangduoi;i>=hangtren;i--){
			arr[i][cottrai]=value++;
		}
		cottrai++;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ", snt(arr[i][j]));
		}
		printf("\n");
	}
	return 0;
}


