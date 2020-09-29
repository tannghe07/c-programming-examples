#include<iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[100000], b[100000], c[100000], d[100000];
		int n, m, i, j, k=0, h=0, kt;
		cin>>n>>m;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<m;i++) cin>>b[i];
		for(i=0;i<n+m;i++){
			d[i]=0;
			if(i<n){
				c[i]=a[k];
				k++;
			}
			else{
				c[i]=b[h];
				h++;
			}
		}
		insertionSort(c, m+n);
		for(i=0;i<m+n;i++){
			if(d[i]==0){
				if(c[i]==c[i+1]){
					d[i+1]=1;
				}
				cout<<c[i]<<" ";
			}
		}
		cout<<endl;
		for(i=0;i<m+n;i++){
			if(d[i]==1) cout<<c[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

