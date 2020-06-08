#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	char d[100];
	gets(s);
	int i, dem=0, last=strlen(s)-1, n=strlen(s), j, k=0;
	for(i=0;i<strlen(s);i++){
		if(s[i]==' ') dem++;
		else break;
	}
	for(i=0;i<=strlen(s)-dem;i++) s[i]=s[i+dem];
	while(s[last]==' '){
		s[last]='\0';
		last--;
	}
	for(i=0;i<n;i++){
		if(s[i]==' '&&s[i+1]==' '){
			for(j=i+1;j<strlen(s);j++){
				s[j]=s[j+1];
			}
			i--;
			n--;
		}
	}

	for(i=strlen(s)-1;i>=0;i--){
		if(s[i]!=' '){
			d[k]=s[i];
			k++;
		}
		else break;
	}
	for(i=0;i<strlen(s);i++){
		if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
	}
	if(s[0]!=' ') s[0]-=32;
	for(i=0;i<strlen(s)-k;i++){
		if(s[i]==' '&&s[i+1]!=' '&&s[i+1]>='a'&&s[i+1]<='z') s[i+1]-=32;
	}
	for(i=0;i<k;i++){
		if(d[i]>='a'&&d[i]<='z') d[i]-=32;
	}
	for(i=k-1;i>=0;i--) printf("%c", d[i]);
	printf(", ");
	for(i=0;i<strlen(s)-k;i++) printf("%c", s[i]);
	return 0;
}
