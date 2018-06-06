//Given a sorted array having no duplicates, arr[] and a value, x, find floor of x in given array. 
//Floor of x is the largest element in arr[] such that the element is smaller than or equal to x. 
//If floor exists, then return index of it, else return -1.
#include <iostream>
using namespace std;

int floorElement(int arr[], int n , int l, int h, int x){
    
    while(l<=h){
        int mid = (l+h)/2;
        
        if(arr[mid]<=x && (arr[mid+1]>x || mid == n-1))
            return mid;
        else if(arr[mid]>x)
            h = mid -1;
        else
            l = mid+1;
    }
    return -1;
}
int main() {
	int test;
	cin>>test;
	while(test--){
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int result = floorElement(arr,n,0,n-1,x);
	    cout<<result<<"\n";
	}
	return 0;
}
