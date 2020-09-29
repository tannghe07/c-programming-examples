#include<iostream>
#include<cmath>
using namespace std;
long long fibo(long long n)
{
	long long b=pow(10, 9)+7;
    long long a1=1, a2=1;
    if(n==0) return 0;
    if (n==1||n==2)
        return 1;
    long long i=3, a;
    while (i<=n)
    {
        a = (a1%b + a2%b)%b;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}
int main(){
	long long n, t;
	cin>>t;
	while(t>0){
		cin>>n;
		cout<<fibo(n);
		cout<<endl;
		t--;
	}
	return 0;
}

