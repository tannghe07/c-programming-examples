#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s[100], a[100], d[100];
	getline(cin, s);
	strlwr(s);
	int k=0, i, l=0, last=strlen(s), dem=0;
	while(s[last]==' '){
		s[last]='\0';
		last--;
	}
	for(i=strlen(s)-1;i>=0;i--){
		if(s[i]!=' '){
			d[l]=s[i];
			l++;
		}else break;
	}
	for(i=l-1;i>=0;i--) cout<<d[i];
	if(s[0]!=' '){
		printf("%c", s[0]);
		for(i=1;i<strlen(s)-l-1;i++){
			if(s[i]==' '&&s[i+1]!=' ') cout<<s[i+1];
		}
	}else{
		for(i=0;i<strlen(s)-l-1;i++){
			if(s[i]==' '&&s[i+1]!=' ') cout<<s[i+1];
		}
	}
	cout<<"@ptit.edu.vn";
	return 0;
}

