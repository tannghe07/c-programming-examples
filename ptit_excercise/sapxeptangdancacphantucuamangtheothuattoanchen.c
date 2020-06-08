#include<stdio.h>
int main(){
	int n, temp, i, j, kt, k;
	int a[100];
	scanf("%d", &n);
	for(i=0;i<n;i++) scanf("%d", &a[i]);
	for(i=1;i<n;i++){
		temp=a[i];
		j=i-1;
		kt=0;
		while(temp<a[j]&&j>=0){
			a[j+1]=a[j];
			j--;
			kt=1;
		}
		a[j+1]=temp;
		for(j=0;j<n;j++){
			if(kt==1) printf("%d ", a[j]);
		}
		printf("\n");
	}
	return 0;
}

