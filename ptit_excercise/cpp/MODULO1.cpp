#include<iostream>
#include<cmath>
using namespace std;
long long lt(long long a, long long n, long long p)
{
    if(n == 1) {
        return a;
    } else {
        long long temp = lt(a, n/2, p);
        if(n % 2 == 0)
            return temp % p * temp % p;
        else
            return temp % p * temp % p * a % p;
    }
}
int main(){
	long long a, b, c, t;
	cin>>t;
	while(t>0){
		cin>>a>>b>>c;
		cout<<lt(a, b, c);
		cout<<endl;
		t--;
	}
	return 0;
}

