#include<iostream>
using namespace std;
int main(){
	int v, a, t, u, s;
	cout<<"Van toc ban dau cua vat: ";//m/s
	cin>>v;
	cout<<"Gia toc cua vat: ";//m/s^2
	cin>>a;
	cout<<"Thoi gian vat di: ";//s
	cin>>t;
	u=v+a*t;
	s=v*t+a*t*t/2;
	cout<<"Van toc cua vat sau thoi gian t: "<<u<<endl;
	cout<<"Quang duong vat di duoc sau thoi gian t: "<<s<<endl;
	return 0;
}



