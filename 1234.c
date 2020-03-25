#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a, b, c, d=0;
	cin>>a;
	b=a;
	do{
		d=d*10;
		c=a%10;
		d+=c;
		a/=10;
	}while(a);
	if(b==d) cout<<"day la so dao nguoc!";
	else cout<<"day khong la so dao nguoc!";
	return 0;
}
