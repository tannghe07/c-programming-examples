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
	while(t>0){
		int a[100000];
		int n, i, j, count=0, k;
		cin>>n>>k;
		for(i=0;i<n;i++) cin>>a[i];
		insertionSort(a, n);
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(a[j]-a[i]<k) count++;
			}
		}
		cout<<count<<endl;
		t--;
	}
	return 0;
}

