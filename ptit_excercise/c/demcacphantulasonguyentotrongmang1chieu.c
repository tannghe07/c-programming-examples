#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool snt(int n){
	int i;
	if(n<2) return false;
	else {
		for(i=2;i<n;i++){
			if(n%i==0) return false;
		}
		return true;
	}
}
int main(){
	int a[100];
	int n, i, count=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		if(snt(a[i])) count++;
	}
	printf("%d ", count);
	for(i=0;i<n;i++){
		if(snt(a[i])) printf("%d ", a[i]);
	}
	return 0;
}
