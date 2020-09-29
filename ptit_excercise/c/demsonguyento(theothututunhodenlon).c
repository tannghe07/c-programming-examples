#include<stdio.h>
#include<stdbool.h>
bool nt(int n){
	int i;
	if(n<2) return false;
	for(i=2;i<n;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int n, i, j, count;
	int a[100];
	int b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d", &a[i]);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	for(i=0;i<n;i++) b[i]=1;
	for(i=0;i<n;i++){
		count=1;
		if(b[i]&&nt(a[i])){
			b[i]=0;
			for(j=i+1;j<n;j++){
				if(a[i]==a[j]){
					count++;
					b[j]=0;
				}
			}
			printf("%d %d\n", a[i], count);
		}
	}
	return 0;
}

