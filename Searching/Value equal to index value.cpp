//Given an array, we need to find that element whose value is equal to that of its index value.
#include <bits/stdc++.h>
using namespace std;
int valueMatching(int arr[], int n, int l, int h){
    while(l<=h){
        int mid = (l+h)/2;
        if(arr[mid]==mid+1)
            return arr[mid];
        else if(arr[mid]>mid+1)
            h = mid -1;
        else
            l = mid + 1;
    }
    return -1;
}
int main() {
	//code
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
        }
        // sort(arr,arr+n);
        int result = valueMatching(arr,n,0,n-1);
        if(result==-1)
            cout<<"Not Found"<<"\n";
        else
            cout<<result<<"\n";
	}
	return 0;
}
