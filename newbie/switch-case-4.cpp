#include<iostream>
using namespace std;
int main(){
	int luachon;
	do{
	cout<<"Lua chon hanh dong de thuc hien voi hai so a va b: ";
	cout<<"\n1.a+b \n2.a-b \n3.a*b \n4.a chia b nguyen \n5.a chia b du \n0.thoat";
	cout<<"\nLua chon cua ban: ";
	cin>> luachon;
	switch( luachon ){
		case 1:{
			int a, b;
			cout<<"Nhap vao so a: ";
			cin>>a;
			cout<<"Nhap vao so b: ";
			cin>>b;
			cout<<"Tong cua hai so a va b la: " << a+b << endl;
			break;
		}
		case 2:{
			int a, b;
			cout<<"Nhap vao so a: ";
			cin>>a;
			cout<<"Nhap vao so b: ";
			cin>>b;
			cout<<"Hieu cua hai so a va b la: " << a-b << endl;
			break;
		}
		case 3:{
			int a, b;
			cout<<"Nhap vao so a: ";
			cin>>a;
			cout<<"Nhap vao so b: ";
			cin>>b;
			cout<<"Tich cua hai so a va b la: " << a*b << endl;
			break;
		}
		case 4:{
			int a, b;
			cout<<"Nhap vao so a: ";
			cin>>a;
			cout<<"Nhap vao so b: ";
			cin>>b;
			cout<<"a chia lay phan nguyen la: " << a/b << endl;
			break;
		}
		case 5:{
			int a, b;
			cout<<"Nhap vao so a: ";
			cin>>a;
			cout<<"Nhap vao so b: ";
			cin>>b;
			cout<<"a chia b lay phan du la: " << a%b << endl;
			break;
		}case 0: break;
	}
}while(luachon!=0);
	return 0;
}

