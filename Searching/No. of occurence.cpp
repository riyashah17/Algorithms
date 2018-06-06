//Given a sorted array C[] and a number X, write a function that counts the occurrences of X in C[].
#include <iostream>
using namespace std;

int findFirst(int arr[], int l, int h, int x, int n){
    
    while(l<=h){
        int mid = (l+h)/2;
        
        if((mid==0 || arr[mid-1]<x) && arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x)
            l = mid+1;
        else
            h = mid-1;
    }
    return -1;
}
int findLast(int arr[], int l, int h, int x,int n){
    
    while(l<=h){
        int mid = (l+h)/2;
        
        if((mid==n-1 || arr[mid+1]>x) && arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x)
            h = mid-1;
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
	    int first = findFirst(arr,0,n-1,x,n);
	    if(first!=-1){
	        int last = findLast(arr,0,n-1,x,n);
	        cout<<last-first+1;
	    }
	    else
	        cout<<-1;
	    cout<<"\n";
	}
	return 0;
}
