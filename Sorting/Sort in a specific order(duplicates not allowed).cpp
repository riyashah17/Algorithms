//Given an array of integers (both odd and even), the task is to sort them in such a way that the first part of the array 
//contains odd numbers sorted in descending order, rest portion contains even numbers sorted in ascending order.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[n];
        set <int> even;
        set <int> odd;
        for(int i= 0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                even.insert(arr[i]);
            }
            else{
               odd.insert(arr[i]); 
            }
        }
        
        for(auto it=odd.rbegin();it!=odd.rend();it++){
            cout<<*it<<" ";
        }
        for(auto it = even.begin();it!=even.end();it++){
            cout<<*it<<" ";
        }
        cout<<"\n";
    }
	return 0;
}
