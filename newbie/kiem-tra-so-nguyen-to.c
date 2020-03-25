#include<stdio.h>
#include<math.h>
int main(){
	int n, count=0, i;
	scanf("%d", &n);
	if(n<2) printf("%d khong la so nguyen to!", n);
	for(i=2; i<=sqrt(n); i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==0) printf("%d la so nguyen to!", n);
	else printf("%d khong la so nguyen to!", n);
	return 0;
}

