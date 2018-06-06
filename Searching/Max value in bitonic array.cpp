//Given an array of elements which is first increasing and then decreasing, find the maximum element in the array.
#include <iostream>
using namespace std;

int bitonicArray(int arr[], int n , int l, int h){
    
    while(l<=h){
        int mid = (l+h)/2;
        
        if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid])
            return arr[mid];
        else if(arr[mid]>arr[mid-1])
            l=mid+1;
        else if(arr[mid]<arr[mid-1])
            h = mid-1;
    }
    return -1;
}
int main() {
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int result = bitonicArray(arr,n,0,n-1);
	    cout<<result<<"\n";
	}
	return 0;
}
