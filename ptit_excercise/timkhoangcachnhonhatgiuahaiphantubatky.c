#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int a[100];
	int i, j;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(a[j-1]>a[j]){
				int tmp=a[j-1];
				a[j-1]=a[j];
				a[j]=tmp;
			}
		}
	}
	int b[100];
	for(i=0;i<n-1;i++){
		b[i]=abs(a[i]-a[i+1]);
	}
	int min=0;
	for(i=1;i<n-1;i++){
		if(b[min]>b[i]) min=i;
	}
	printf("%d %d %d", b[min], a[min], a[min+1]);
	return 0;
}

