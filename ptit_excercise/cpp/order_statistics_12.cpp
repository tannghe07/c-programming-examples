#include<iostream>
using namespace std;
int a[1000000];
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
	while(t>0){
		int n;
		cin>>n;
		int i, j;
		for(i=0;i<n;i++) cin>>a[i];
		insertionSort(a, n);
		int temp=-1, emp=1;
		for(i=0;i<n;i++){
			if(a[i]==1){
				emp=0;
				break;
			}
		}
		for(i=0;i<n-1;i++){
			if(a[i]>=0){
				if(a[i+1]-a[i]>1){
					temp=a[i]+1;
					break;
				}
			}
		}
		if(a[n-1]<0) cout<<"1"<<endl;
		else if(emp!=0) cout<<"1"<<endl;
		else if(temp==-1) cout<<a[n-1]+1<<endl;
		else if(temp!=-1) cout<<temp<<endl;
		t--;
	}
	return 0;
}
