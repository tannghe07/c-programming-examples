#include<stdio.h>
int tongHang(int a[100][100], int m, int n){
	int i, j, th, b[100], k=0;
	for(i=0;i<m;i++){
		th=0;
		for(j=0;j<n;j++){
			th+=a[i][j];
		}
		b[k]=th;
		k++;
	}
	int max=0;
	for(i=0;i<k;i++){
		if(b[i]>max){
			max=b[i];
		}
	}
	return max;
}
int tongCot(int a[100][100], int m, int n){
	int i, j, tc, b[100], k=0;
	for(j=0;j<n;j++){
		tc=0;
		for(i=0;i<m;i++){
			tc+=a[i][j];
		}
		b[k]=tc;
		k++;
	}
	int max=0;
	for(i=0;i<k;i++){
		if(b[i]>max){
			max=b[i];
		}
	}
	return max;
}
int main(){
	int a[100][100], m, n, i, j, th, kh, tc, kc;
	int b[100][100];
	scanf("%d%d", &m, &n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++) scanf("%d", &a[i][j]);
	}
	for(i=0;i<m;i++){
		th=0;
		for(j=0;j<n;j++){
			th+=a[i][j];
		}
		if(th==tongHang(a, m, n)){
			kh=i;
			break;
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i!=kh) b[i][j]=a[i][j];
		}
	}
	for(j=0;j<n;j++){
		tc=0;
		for(i=0;i<m;i++){
			tc+=b[i][j];
		}
		if(tc==tongCot(b, m, n)){
			kc=j;
			break;
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i!=kh&&j!=kc) printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
