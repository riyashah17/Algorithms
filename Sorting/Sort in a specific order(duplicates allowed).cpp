#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[n];
        for(int i= 0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0){
                arr[i]*=-1;
            }
        }

        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                arr[i]*=-1;
            }
        }
        
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        
    }
	return 0;
}
