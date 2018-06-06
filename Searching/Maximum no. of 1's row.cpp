//Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.
#include <iostream>
using namespace std;

int maxOnes(int arr[], int l, int h){
    while(l<=h){
        
        int mid = (l+h)/2;
        if((mid==0 || arr[mid-1]==0) && arr[mid]==1)
            return mid;
        else if(arr[mid]==0)
            l = mid+1;
        else
            h = mid-1;
    }
    return -1;
}

int main() {
	//code
	int test;
	cin>>test;
	while(test--){
	    int n,m;
	    cin>>n>>m;
	    int arr[n][m];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cin>>arr[i][j];
	        }
	    }
	    int i;
	    int max_index , max=-1 , ind=0;
	    for(i=0;i<n;i++){
	        max_index = maxOnes(arr[i],0,m-1);
	        if(max_index!=-1 && (m-max_index)>max){
	            max = m-max_index;
	            ind = i;
	        }
	    }
	    cout<<ind<<"\n";
	}
	return 0;
}
