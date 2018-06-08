//Given an array A[] of n elements. The task is to complete the function which returns true if triplets exists in array A[] whose sum 
//is zero else returns false.
{
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
bool findTriplets(int arr[], int n);
int main()
{
    int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int arr[n]={0};
	for(int i=0;i<n;i++)
		cin>>arr[i];
    if(findTriplets(arr, n))
    cout<<"1"<<endl;
    else 
    cout<<"0"<<endl;
	}
    return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete the function below*/
bool findTriplets(int arr[], int n)
{ 
    //Your code here
    sort(arr,arr+n);
    int i;
    for(i=0;i<n-2;i++){
        int l = i+1;
        int r = n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r]==0){
                return true;
            }
            else if(arr[i]+arr[l]+arr[r]>0)
                r--;
            else 
                l++;
        }
    }
    return false;
}
