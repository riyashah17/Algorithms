//Given an array with all elements greater than or equal to zero.Return the maximum product of two numbers possible.
#include <iostream>
using namespace std;
int partition(int arr[],int start, int end){
    
    int pivot = arr[end];
    int pIndex = start;
    for(int i=start;i<end;i++){
        if(arr[i]<=pivot){
            swap(arr[i],arr[pIndex]);
            pIndex = pIndex+ 1;
        }
    }
    swap(arr[pIndex], arr[end]);
    return pIndex;
}
void quickSort(int arr[],int start, int end){
    
    if(start>=end)
        return;
    int pIndex = partition(arr,start,end);
    quickSort(arr,start,pIndex-1);
    quickSort(arr,pIndex+1,end);
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
	    
	    quickSort(arr,0,n-1);
	    cout<<arr[n-2]*arr[n-1]<<"\n";
	}
	return 0;
}
