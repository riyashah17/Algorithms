//Given an n x m matrix, where every row and column is sorted in increasing order, and a number x . 
//The task is to find whether element x is present in the matrix or not.
//Expected Time Complexity : O(m + n)
#include <bits/stdc++.h>
using namespace std;

int main() {
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
	    int x,flag=0;
	    cin>>x;
	    
	    int i = 0, j= m-1;
	    while(i<n && j>=0){
	        
	        if(arr[i][j]==x){
	           cout<<1<<"\n";
	           flag = 1;
	           break;
	        }
	        else if(arr[i][j]>x)
	            j--;
	        else
	            i++;
	    }
	    if(flag==0)
	        cout<<0<<"\n";
	}
	return 0;
}
