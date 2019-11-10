#include<iostream>
using namespace std;
int main(){
	double a, b, c;
	cout << "Your salary: ";// trieu vnd
	cin >> a; 
	if(a>=15){
		b=a*30/100;
		cout<<" Your tax " << b << endl;
	}else if(a>=7&&a<15){
		b=a*20/100;
		cout<<" Your tax " << b << endl;
	}else if(a<7){
		b=a*10/100;
		cout<<" Your tax " << b << endl;
	}c=a-b;
	cout<<" Real salary " << c << endl;
	return 0;
}

