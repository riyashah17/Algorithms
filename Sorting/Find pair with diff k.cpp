//Given an unsorted array Arr[] and a number N. You need to write a program to find if there exists a pair of elements 
//in the array whose difference is N.
#include <bits/stdc++.h>
using namespace std;

int pairDiff(int arr[], int n, int x){
    
    sort(arr,arr+n);
    int l=0,r=1;
    // while(l<r && l<n && r<n){
    while(l<n && r<n){
        if(l!=r && arr[r]-arr[l]==x)
            return 1;
        else if(arr[r]-arr[l]<x)
            r++;
        else
            l++;
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
	    
	    int result = pairDiff(arr,n,x);
	    cout<<result<<"\n";
    }
	return 0;
}
