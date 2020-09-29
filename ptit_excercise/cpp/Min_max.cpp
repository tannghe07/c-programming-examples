#include<iostream>
#include<cmath>
using namespace std;
long long tong(long long n){
	long long a, b=0;
	while(n){
		a=n%10;
		b+=a;
		n/=10;
	}
	return b;
}
int main(){
	long long m, s, min, i, max, count=0;
	cin>>m>>s;
	min=9999999;
	max=-1;
	for(i=pow(10, m-1); i<pow(10, m); i++){
		if(tong(i)==s&&i<min){
			count++;
			min=i;
		}
		if(tong(i)==s&&i>max){
			max=i;
		}
	}
	if(count!=0) cout<<min<<" "<<max;
	else cout<<"-1"<<" "<<max;
	return 0;
}

