#include<stdio.h>
#include<math.h>
long long a[999999];
long long ucln(long long a, long long b){
	if(b==0) return a;
	return ucln(b, a%b);
}
int main(){
	long long n, i, count=1, x=0, j=1;
	scanf("%lld", &n);
	for(i=0;i<n;i++) scanf("%lld", &a[i]);
	x=a[0];
	for(i=1;i<n;i++){
		if(a[i]!=a[i-1]) x=ucln(a[i], x);
		if(x==1) break;
	}
	if(x==1) printf("1");
	else{
		while(x>1){
			long long dem=0;
			j++;
			if(j>sqrt(x)){
				count*=2;
				break;
			}
			if(x%j==0){
				while(x%j==0){
					dem++;
					x/=j;			//dung cong thuc dem so uoc cua mot so
				}					//a=b^n*c^m*.... voi b, c la cac so nguyen to(phan tich thanh thua so nguyen to)
				count*=(dem+1);		//=> so uoc la: (b+1)*(c+1)*....
			}
		}
		printf("%lld", count);
	}
	return 0;
}

