//You have to merge the two sorted arrays into one sorted array (in non-increasing order)
#include <bits/stdc++.h>
using namespace std;

void mergeArray(long int arr1[], long int arr2[], int n, int m){
    int i=0,j=0;
    
    while(i<n && j<m){
        if(arr1[i]>=arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }
        else{
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    
    while(i<n){
        cout<<arr1[i]<<" ";
        i++;
    }
    
    while(j<m){
        cout<<arr2[j]<<" ";
        j++;
    }
    
    cout<<"\n";
}
int main() {
	//code
	int test;
	cin>>test;
	while(test--){
	    int n,m;
	    cin>>n>>m;
	    long int arr1[n],arr2[m];
	    for(int i=0;i<n;i++){
	        cin>>arr1[i];
	    }
	    for(int i=0;i<m;i++){
	        cin>>arr2[i];
	    }
	    sort(arr1,arr1+n,greater<int>());
	    sort(arr2,arr2+m,greater<int>());
	    mergeArray(arr1,arr2,n,m);
	}
	return 0;
}
