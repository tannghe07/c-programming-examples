#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool snt(int n){
	int i;
	if(n<2) return false;
	for(i=2;i<n;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int a[100][100];
	int b[100];
	int c[100];
	int n, i, j, count=0, dem=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++) scanf("%d", &a[i][j]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j||(i==n-j-1&&i!=j)){
				if(snt(a[i][j])){
					b[count]=a[i][j];
					count++;
				}
			}
		}
	}
	for(i=0;i<count;i++) c[i]=1;
	for(i=0;i<count;i++){
		if(c[i]){
			c[i]=1;
			for(j=i+1;j<count;j++){
				if(b[i]==b[j]){
					c[j]=0;
				}
			}
			dem++;
		}
	}
	printf("%d", dem);
	return 0;
}

