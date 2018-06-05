{
// C++ implementation of For each element in 1st 
// array count elements less than or equal to it
// in 2nd array
#include <bits/stdc++.h>
 
using namespace std;
 
// function returns the index of largest element 
// smaller than equal to 'x' in 'arr'. For duplicates
// it returns the last index of occurrence of required
// element. If no such element exits then it returns -1. 
int binary_search(int arr[], int l, int h, int x);
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
void countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n);
// Driver program to test above
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        countEleLessThanOrEqual(arr1, arr2, m, n);
        cout<<endl;
    }
    return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
int binarySearch(int x, int arr[] , int l ,int h ){
    
    while(l<=h){
        int mid  = (l+h)/2; 
        
        if(arr[mid]<=x){
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }
    return h;
    
}
void countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n){
//Your code goes here
    sort(arr2,arr2+n);
    int result;

    for(int i=0;i<m;i++){
        result = binarySearch(arr1[i],arr2,0,n-1);
        cout<<result+1<<" ";
    }

}
