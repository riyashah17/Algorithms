//Given an array of integers. The task is to find a peak element in it. An array element is peak if it is not smaller than its neighbors. 
//For corner elements, we need to consider only one neighbor. For example, for input array {5, 10, 20, 15}, 20 is the only peak element. 
//For input array {10, 20, 15, 2, 23, 90, 67}, there are two peak elements: 20 and 90. 
//Note: There may be multiple peak element possible, in that case you may return any valid index.
{
#include<bits/stdc++.h>
using namespace std;
int peak(int arr[], int n);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		bool f=0;
		int A = peak(a,n);
		
		if(n==1)
		f=1;
		else
		if(A==0 and a[0]>=a[1])
		f=1;
		else if(A==n-1 and a[n-1]>=a[n-2])
		f=1;
		else if(a[A] >=a[A+1] and a[A]>= a[A-1])
		f=1;
		else
		f=0;
		
		cout<<f<<endl;
		
	}
	// your code goes here
	return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/
int peakUtil(int arr[], int n, int l, int h){
    int mid = (l+h)/2;
    
    if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid]))
        return mid;
    else if(mid>0 && arr[mid-1]>arr[mid])
        return peakUtil(arr,n,l,mid-1);
    else    
        return peakUtil(arr,n,mid+1,h);
}
/* The function should return the index of any
   peak element present in the array */
int peak(int arr[], int n)
{
   // Your code here
   return peakUtil(arr,n,0,n-1);
   
}
