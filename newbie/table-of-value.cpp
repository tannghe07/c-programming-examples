#include<iostream>

using namespace std;
int main(){
	int x, y;
	cout<<"Nhap gia tri x: ";
	cin>>x;
	cout<<"Nhap gia tri y: ";
	cin>>y;
	cout<<"Gia tri x |\tGia tri y |\tBieu thuc |\tKet qua\n";
	cout<<x<<"\t  |\t"<<y<<"\t  |\t x+y\t  |\t"<<x+y<<endl;
	cout<<x<<"\t  |\t"<<y<<"\t  |\t x-y\t  |\t"<<x-y<<endl;
	cout<<x<<"\t  |\t"<<y<<"\t  |\t x*y\t  |\t"<<x*y<<endl;
	cout<<x<<"\t  |\t"<<y<<"\t  |\t x/y\t  |\t"<<(float)x/y<<endl;
	cout<<x<<"\t  |\t"<<y<<"\t  |\t x%y\t  |\t"<<x%y<<endl;
	return 0;
}

