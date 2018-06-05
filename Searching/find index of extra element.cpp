{
#include<bits/stdc++.h>
using namespace std;
int findExtra(int a[],int b[],int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n-1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			cin>>b[i];
		}
		cout<<findExtra(a,b,n)<<endl;
	}
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function below*/
int findExtra(int a[],int b[],int n)
{
 //add code here.
 int ind = 0;
 int l = 0 , h = n-1;
 
 while(l<=h){
     int mid = (l+h)/2;
     
    if(a[mid]==b[mid])
        l = mid+1;
        
    else{
        ind = mid;
        h = mid - 1;
    } 
 }
 
 return ind;
}
