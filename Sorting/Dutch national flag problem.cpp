//Write a program to sort an array of 0's,1's and 2's in ascending order.
#include <iostream>
using namespace std;

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
	    
	    int low = 0;
	    int mid = 0;
	    int high = n-1;
	    
	    while(mid<=high){
	        switch(arr[mid]){
	            
	            case 0:
	                swap(arr[low++],arr[mid++]);
	                break;
	            
	            case 1:
	                mid++;
	                break;
	               
	            case 2:
	                swap(arr[mid],arr[high--]);
	                break;
	        }
	    }
	    
	    for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
