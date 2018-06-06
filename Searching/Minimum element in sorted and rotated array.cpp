//A sorted array A[ ] with distinct elements is rotated at some unknown point, the task is to find the minimum element in it.
//Expected Time Complexity: O(Log n)
#include <bits/stdc++.h>
using namespace std;

int minElement(int arr[], int n, int l, int h){
    
    while(l<=h){
        int mid = (l+h)/2;
        
        if(l==h)
        return arr[l];
        
        if(arr[mid]<arr[mid-1])
            return arr[mid];
        else if(arr[mid]<arr[h])
            h= mid-1;
        else if(arr[mid]>arr[h])
            l = mid+1;
    }
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
        int result = minElement(arr,n,0,n-1);
        cout<<result<<"\n";
    }
	return 0;
}
